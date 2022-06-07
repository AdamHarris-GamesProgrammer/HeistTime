// Copyright Epic Games, Inc. All Rights Reserved.

#include "HeistTimeCharacter.h"
#include "HeistTimeProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Weapon.h"


//////////////////////////////////////////////////////////////////////////
// AHeistTimeCharacter

AHeistTimeCharacter::AHeistTimeCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	TurnRateGamepad = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));
}

void AHeistTimeCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	AWeapon* pPrimaryWeapon = GetWorld()->SpawnActor<AWeapon>(_primaryWeaponClass);
	pPrimaryWeapon->AttachToComponent(Mesh1P, FAttachmentTransformRules::KeepRelativeTransform, "GripPoint");
	pPrimaryWeapon->SetOwner(this);
	_pWeapons.Add(pPrimaryWeapon);

	AWeapon* pSecondaryWeapon = GetWorld()->SpawnActor<AWeapon>(_secondaryWeaponClass);
	pSecondaryWeapon->AttachToComponent(Mesh1P, FAttachmentTransformRules::KeepRelativeTransform, "GripPoint");
	pSecondaryWeapon->SetOwner(this);
	_pWeapons.Add(pSecondaryWeapon);

	_pCurrentWeapon = pPrimaryWeapon;
	pSecondaryWeapon->SetActorHiddenInGame(true);
}

//////////////////////////////////////////////////////////////////////////// Input

void AHeistTimeCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	

	// Bind fire event
	PlayerInputComponent->BindAction("PrimaryAction", IE_Pressed, this, &AHeistTimeCharacter::OnPrimaryAction);
	PlayerInputComponent->BindAction("ReloadAction", IE_Pressed, this, &AHeistTimeCharacter::OnReloadAction);
	PlayerInputComponent->BindAction("InteractAction", IE_Pressed, this, &AHeistTimeCharacter::OnInteractionAction);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AHeistTimeCharacter::CrouchHandle);

	// Bind movement events
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AHeistTimeCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &AHeistTimeCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "Mouse" versions handle devices that provide an absolute delta, such as a mouse.
	// "Gamepad" versions are for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &AHeistTimeCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &AHeistTimeCharacter::LookUpAtRate);

	PlayerInputComponent->BindAxis("MouseWheel", this, &AHeistTimeCharacter::MouseWheelHandle);
}

void AHeistTimeCharacter::OnPrimaryAction()
{
	if (_pCurrentWeapon != nullptr) {
		_pCurrentWeapon->PullTrigger();
	}

	// Trigger the OnItemUsed Event
	OnUseItem.Broadcast();
}

void AHeistTimeCharacter::OnReloadAction()
{
	if (_pCurrentWeapon != nullptr) {
		_pCurrentWeapon->Reload();
	}
}

void AHeistTimeCharacter::OnInteractionAction() {
	if (_pNearbyPickup != nullptr) {
		_pNearbyPickup->Pickup(this);
	}
}

void AHeistTimeCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AHeistTimeCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AHeistTimeCharacter::CrouchHandle()
{
	if (bIsCrouched) {
		UnCrouch(true);
	}
	else {
		Crouch(true);
	}
}

void AHeistTimeCharacter::MouseWheelHandle(float Val)
{
	if (Val == 0.0f) return;

	_currentWeaponIndex = (_currentWeaponIndex + (int)Val) % _pWeapons.Num();
	if (_currentWeaponIndex < 0) _currentWeaponIndex = _pWeapons.Num() - 1;

	UE_LOG(LogTemp, Warning, TEXT("Current Weapon: %i"), _currentWeaponIndex);

	_pCurrentWeapon->SetActorHiddenInGame(true);
	_pCurrentWeapon = _pWeapons[_currentWeaponIndex];
	_pCurrentWeapon->SetActorHiddenInGame(false);
}

void AHeistTimeCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AHeistTimeCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}
