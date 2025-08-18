#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

struct FOmochaGameplayTags
{
	static const FOmochaGameplayTags& Get()
	{
		return GameplayTags;
	}

	static void InitializeNativeGameplayTags();

	/*
	 * Character Tags
	 */
	// Damage check tag
	FGameplayTag Player;
	FGameplayTag Enemy;

	// Character Type Tags
	FGameplayTag Character_Type_Zenith;
	FGameplayTag Character_Type_Vulcan;
	FGameplayTag Character_Type_Rusty;

	// Character State Tags
	FGameplayTag State_Omega;
	FGameplayTag State_Normal;
	FGameplayTag State_Dead;
	FGameplayTag State_RevivingWithOmega;
	
	/*
	 *(Ability Tags)
	 */
	// Input Tags ()
	FGameplayTag InputTag_Ability_Q;
	FGameplayTag InputTag_Ability_R;
	FGameplayTag InputTag_Ability_LeftShift;
	FGameplayTag InputTag_Ability_Spacebar;
	FGameplayTag InputTag_Ability_LMB;
	FGameplayTag InputTag_Ability_RMB;

	FGameplayTag Ability_Shield_Block;
	FGameplayTag Ability_Shield_Dash;;

	// Normal Abilities (Do not delete still using)
	FGameplayTag Ability_Normal_Skill_RMB;
	FGameplayTag Ability_Normal_Skill_Q;
	FGameplayTag Ability_Normal_Steal;
	FGameplayTag Ability_Normal_HitReact;
	FGameplayTag Ability_Normal_Attack;

	// Normal Abilities - Zenith
	FGameplayTag Ability_Normal_Zenith_Attack;
	FGameplayTag Ability_Normal_Zenith_Skill_Q;
	FGameplayTag Ability_Normal_Zenith_Skill_RMB;

	// Normal Abilities - Vulcan
	FGameplayTag Ability_Normal_Vulcan_Attack;
	FGameplayTag Ability_Normal_Vulcan_Skill_Q;
	FGameplayTag Ability_Normal_Vulcan_Skill_RMB;

	// Normal Abilities - Rusty
	FGameplayTag Ability_Normal_Rusty_Attack;
	FGameplayTag Ability_Normal_Rusty_Skill_Q;
	FGameplayTag Ability_Normal_Rusty_Skill_RMB;

	// Omega Abilities - Zenith
	FGameplayTag Ability_Omega_Zenith_Attack;
	FGameplayTag Ability_Omega_Zenith_Skill_Q;
	FGameplayTag Ability_Omega_Zenith_Skill_LeftShift;
	FGameplayTag Ability_Omega_Zenith_Skill_R;
	FGameplayTag Ability_Omega_Zenith_Skill_RMB;

	// Omega Abilities - Vulcan
	FGameplayTag Ability_Omega_Vulcan_Attack;
	FGameplayTag Ability_Omega_Vulcan_Skill_Q;
	FGameplayTag Ability_Omega_Vulcan_Skill_LeftShift;
	FGameplayTag Ability_Omega_Vulcan_Skill_R;
	FGameplayTag Ability_Omega_Vulcan_Skill_RMB;

	// Omega Abilities - Rusty
	FGameplayTag Ability_Omega_Rusty_Attack;
	FGameplayTag Ability_Omega_Rusty_Skill_Q;
	FGameplayTag Ability_Omega_Rusty_Skill_E;
	FGameplayTag Ability_Omega_Rusty_Skill_R;
	FGameplayTag Ability_Omega_Rusty_Skill_RMB;

	// Enemy Abilities
	FGameplayTag Ability_Enemy_Zenith_Skill_BasicAttack;
	FGameplayTag Ability_Enemy_Zenith_Skill_ChainLightning;
	FGameplayTag Ability_Enemy_Zenith_Skill_Teleport;
	FGameplayTag Ability_Enemy_Zenith_Skill_DisCharge;
	FGameplayTag Ability_Enemy_Zenith_Skill_Charge;

	FGameplayTag Ability_Enemy_Vulcan_Skill_BasicAttack;
	FGameplayTag Ability_Enemy_Vulcan_Skill_AttackSpeedBuff;
	FGameplayTag Ability_Enemy_Vulcan_Skill_MoveSpeedBuff;
	FGameplayTag Ability_Enemy_Vulcan_Skill_Grenade;
	FGameplayTag Ability_Enemy_Vulcan_Skill_LinerGrenade;

	FGameplayTag Ability_Enemy_Rusty_Skill_BasicAttack;
	FGameplayTag Ability_Enemy_Rusty_Skill_Shield;
	FGameplayTag Ability_Enemy_Rusty_Skill_UnShield;
	FGameplayTag Ability_Enemy_Rusty_Skill_Grap;
	FGameplayTag Ability_Enemy_Rusty_Skill_BlockDash;

	FGameplayTag Ability_Enemy_BlazedCannon_Skill_BasicAttack;
	FGameplayTag Ability_Enemy_BlazedCannon_Skill_Back;
	FGameplayTag Ability_Enemy_BlazedCannon_Skill_Fire;
	FGameplayTag Ability_Enemy_BlazedCannon_Skill_BigBomb;
	FGameplayTag Ability_Enemy_BlazedCannon_Skill_KnockBackAttack;
	FGameplayTag Ability_Enemy_BlazedCannon_Skill_HealBuff;

	FGameplayTag Ability_Enemy_Glitch_Skill_BasicAttack;
	FGameplayTag Ability_Enemy_Glitch_Skill_Buff;
	FGameplayTag Ability_Enemy_Glitch_Skill_Teleport;
	FGameplayTag Ability_Enemy_Glitch_Skill_Gravity;
	FGameplayTag Ability_Enemy_Glitch_Skill_Charge;

	FGameplayTag Ability_Enemy_Screamer_Skill_BasicAttack;
	FGameplayTag Ability_Enemy_Screamer_Skill_Ambush;
	FGameplayTag Ability_Enemy_Screamer_Skill_Jump;
	FGameplayTag Ability_Enemy_Screamer_Skill_Roar;
	FGameplayTag Ability_Enemy_Screamer_Skill_Grab;
	FGameplayTag Ability_Enemy_Screamer_Skill_Shield;
	FGameplayTag Ability_Enemy_Screamer_Skill_Tackle;


	// Death
	FGameplayTag Ability_Death;

	// Omega Hit React
	FGameplayTag Ability_Omega_HitReact;

	// Omega Give
	FGameplayTag Ability_Omega_Give;

	/*
	 * Cooldown
	 */
	FGameplayTag CoolDown_Ability_Attack;
	FGameplayTag CoolDown_Ability_Dash;

	FGameplayTag CoolDown_Normal_Steal;
	FGameplayTag CoolDown_Omega_Give;

	// Cooldown - Normal
	FGameplayTag Cooldown_Normal_Skill_Q;
	FGameplayTag Cooldown_Normal_Skill_RMB;

	// Cooldown - Omega
	FGameplayTag Cooldown_Omega_Skill_Q;
	FGameplayTag Cooldown_Omega_Skill_LeftShift;
	FGameplayTag Cooldown_Omega_Skill_R;
	FGameplayTag Cooldown_Omega_Skill_RMB;

	/*
	 * (Animation & Mesh Tags)
	 */
	// Event Montage Tags
	FGameplayTag Montage_Shoot;
	FGameplayTag Montage_MeleeAttack;
	FGameplayTag Montage_GetHit;
	FGameplayTag Montage_Jump;
	FGameplayTag Montage_Dead;
	FGameplayTag Montage_End;
	FGameplayTag Montage_Roar;
	FGameplayTag Montage_Attack1;
	FGameplayTag Montage_Attack2;
	FGameplayTag Montage_Attack3;


	// Transform Montage Tags
	FGameplayTag Montage_Transform_Zenith;
	FGameplayTag Montage_Transform_Vulcan;
	FGameplayTag Montage_Transform_Rusty;

	// Emote Montage Tags
	FGameplayTag Montage_Emote_Dance;
	FGameplayTag Montage_Emote_Wave;

	// Socket Tags
	FGameplayTag Socket_Weapon;
	FGameplayTag Socket_Arm;
	FGameplayTag Socket_Hand;
	FGameplayTag Socket_Head;

	/*
	 * Attributes Tags 
	 */
	// Current Attributes
	FGameplayTag Attributes_Vital_Health;
	FGameplayTag Attributes_Current_Resilience;
	FGameplayTag Attributes_Current_AttackDamage;
	FGameplayTag Attributes_Current_SkillDamage;
	FGameplayTag Attributes_Current_Shield;
	FGameplayTag Attributes_Current_MoveSpeed;
	FGameplayTag Attributes_Current_AttackSpeed;
	FGameplayTag Attributes_Current_CoolDownReduction;
	FGameplayTag Attributes_Current_AttackRange;
	FGameplayTag Attributes_Current_Level;
	FGameplayTag Attributes_Current_ChargeLevel;
	FGameplayTag Attributes_Current_Omega;
	FGameplayTag Attributes_Current_KnockbackResistance;
	FGameplayTag Attributes_Current_LifeSteal;

	// Critical hit
	FGameplayTag Attributes_Current_CriticalChance;
	FGameplayTag Attributes_Current_CriticalDamage;
	FGameplayTag Attributes_Current_DodgeChance;

	// Debuff Attributes
	FGameplayTag Debuff_Chance;
	FGameplayTag Debuff_Damage;
	FGameplayTag Debuff_Duration;
	FGameplayTag Debuff_Frequency;
	FGameplayTag Skill_Multiplier;

	// Resistance 
	FGameplayTag Attributes_Resistance_Electric;
	FGameplayTag Attributes_Resistance_Fire;
	FGameplayTag Attributes_Resistance_Rust;

	// Max Attributes
	FGameplayTag Attributes_Vital_MaxHealth;
	FGameplayTag Attributes_Max_MaxMoveSpeed;
	FGameplayTag Attributes_Max_MaxAttackSpeed;
	FGameplayTag Attributes_Max_MaxCoolDownReduction;
	FGameplayTag Attributes_Max_MaxLevel;

	// Meta Attributes
	FGameplayTag Attributes_Meta_IncomingXP;
	FGameplayTag Attributes_Meta_IncomingDamage;

	// Character Attributes
	// Zenith
	FGameplayTag Attributes_Character_Zenith_ChainCount;
	FGameplayTag Attributes_Character_Zenith_ChargingTimeMultiplier;
	FGameplayTag Attributes_Character_Zenith_CanRotateWhileCharging;

	// Vulcan
	FGameplayTag Attributes_Character_Vulcan_HasBuffRadius;
	FGameplayTag Attributes_Character_Vulcan_BuffRadiusMultiplier;
	FGameplayTag Attributes_Character_Vulcan_UltimateBezierCount;

	// Rusty
	FGameplayTag Attributes_Character_Rusty_HookSizeMultiplier;
	FGameplayTag Attributes_Character_Rusty_HookSpeedMultiplier;
	FGameplayTag Attributes_Character_Rusty_UltimateGravityPull;
	FGameplayTag Attributes_Character_Rusty_ShieldMaxHealth;

	// Common
	FGameplayTag Attributes_Character_Common_AttackPenetrationCount;
	FGameplayTag Attributes_Character_Common_MovementSkillRangeMultiplier;
	FGameplayTag Attributes_Character_Common_AttackProjectileSpeedMultiplier;

	/*
	 * Combat Tags
	 */
	FGameplayTag Effects_HitReact;

	/*
	 * Damage Tags
	 */
	FGameplayTag Damage;
	FGameplayTag Damage_Zenith;
	FGameplayTag Damage_Vulcan;
	FGameplayTag Damage_Rusty;
	FGameplayTag Damage_Zinx;
	FGameplayTag Damage_Muriel;
	FGameplayTag Damage_Shiv;
	FGameplayTag Damage_Murdock;
	FGameplayTag Damage_Boris;
	FGameplayTag Damage_Grappler;
	FGameplayTag Damage_BlazedCannon;
	FGameplayTag Damage_Glitch;
	FGameplayTag Damage_Screamer;
	/*
	 * Player Block Tags
	 */
	FGameplayTag Player_Block_Move;
	FGameplayTag Player_Block_InputPressed;
	FGameplayTag Player_Block_InputHeld;
	FGameplayTag Player_Block_InputReleased;
	FGameplayTag Player_Block_CursorTrace;

	/*
	 * Ability Type Tags
	 */
	FGameplayTag Abilities_Type_Active;
	FGameplayTag Abilities_Type_Passive;
	FGameplayTag Abilities_Type_None;

	// Enemy AI
	FGameplayTag Abilities_Type_Attack;

	/*
	 * Debuff Type Tags
	 */
	FGameplayTag Debuff_Status_Shock;
	FGameplayTag Debuff_Status_Stun;
	FGameplayTag Debuff_Status_Slow;

	FGameplayTag Debuff_Dot_Burn;
	FGameplayTag Debuff_Dot_Corrosion;

	/*
	 * Data
	 */
	FGameplayTag Data_SpeedReduction;
	FGameplayTag Data_CoolDown;
	FGameplayTag Data_Heal;

	/*
	 * Gameplay Cue Tags
	 */
	FGameplayTag GameplayCue_Movement_Teleport;
	FGameplayTag GameplayCue_Movement_Dash;

	FGameplayTag GameplayCue_MuzzleEffect_BasicAttack;
	FGameplayTag GameplayCue_MuzzleEffect_VulcanAttack;
	FGameplayTag GameplayCue_MuzzleEffect_ZenithAttack;
	FGameplayTag GameplayCue_MuzzleEffect_RustyAttack;
	FGameplayTag GameplayCue_MuzzleEffect_EnemyAttack;
	FGameplayTag GameplayCue_MuzzleEffect_Grenade;
	FGameplayTag GameplayCue_MuzzleEffect_ZenithGrenade;

	FGameplayTag GameplayCue_Zenith_Skill_Q;
	FGameplayTag GameplayCue_Zenith_Skill_LeftShift;
	FGameplayTag GameplayCue_Zenith_Skill_R;
	FGameplayTag GameplayCue_Zenith_Skill_RMB;
	FGameplayTag GameplayCue_Zenith_Skill_Chain;
	FGameplayTag GameplayCue_Zenith_Skill_Lightning;
	FGameplayTag GameplayCue_Zenith_Skill_R_Muzzle;

	FGameplayTag GameplayCue_Vulcan_Skill_Q;
	FGameplayTag GameplayCue_Vulcan_Skill_LeftShift;
	FGameplayTag GameplayCue_Vulcan_Skill_R;
	FGameplayTag GameplayCue_Vulcan_Skill_RMB;
	FGameplayTag GameplayCue_Vulcan_Skill_BuffStart;
	FGameplayTag GameplayCue_Vulcan_Skill_Dash;

	FGameplayTag GameplayCue_Rusty_BasicAttack;
	FGameplayTag GameplayCue_Rusty_OmicronBasicAttack;
	FGameplayTag GameplayCue_Rusty_Skill_Q;
	FGameplayTag GameplayCue_Rusty_Skill_LeftShift;
	FGameplayTag GameplayCue_Rusty_Skill_R;
	FGameplayTag GameplayCue_Rusty_Skill_RMB;
	FGameplayTag GameplayCue_Rusty_Skill_DownDash;
	FGameplayTag GameplayCue_Rusty_Skill_Crush;


	/*
	 * Enemy
	 */
	FGameplayTag GameplayCue_Enemy_Infantry_Skill_BuffStart;
	FGameplayTag GameplayCue_Enemy_Infantry_Skill_Buff;
	FGameplayTag GameplayCue_Enemy_Skill_Chain;
	FGameplayTag GameplayCue_Enemy_Skill_Discharge;
	FGameplayTag GameplayCue_Enemy_Skill_Charge;
	FGameplayTag GameplayCue_Enemy_Skill_Teleport;
	FGameplayTag GameplayCue_Enemy_Rusty_BasicAttack;

	FGameplayTag GameplayCue_Enemy_BlazeCannon_KnockBack;
	FGameplayTag GameplayCue_Enemy_BlazeCannon_Back;
	FGameplayTag GameplayCue_Enemy_BlazeCannon_BigBomb;

	FGameplayTag GameplayCue_Enemy_Glitch_BasicAttack;
	FGameplayTag GameplayCue_Enemy_Glitch_BuffStart;
	FGameplayTag GameplayCue_Enemy_Glitch_Buff;
	FGameplayTag GameplayCue_Enemy_Glitch_Charge;

	FGameplayTag GameplayCue_Enemy_Screamer_BasicAttack;
	FGameplayTag GameplayCue_Enemy_Screamer_Roar;
	FGameplayTag GameplayCue_Enemy_Screamer_Jump;
	FGameplayTag GameplayCue_Enemy_Screamer_Ambush;
	FGameplayTag GameplayCue_Enemy_Screamer_Grab;
	FGameplayTag GameplayCue_Enemy_Screamer_Tackle;

	/*
	 * Item Tags
	 */

	FGameplayTag GameplayCue_Item_GetItemBase;
	FGameplayTag GameplayCue_Item_Healing;

	FGameplayTag GameplayCue_Item_Health;
	FGameplayTag GameplayCue_Item_MaxHealth;
	FGameplayTag GameplayCue_Item_AttackDamage;
	FGameplayTag GameplayCue_Item_AttackSpeed;
	FGameplayTag GameplayCue_Item_MoveSpeed;
	FGameplayTag GameplayCue_Item_Shield;
	FGameplayTag GameplayCue_Item_Critical;
	FGameplayTag GameplayCue_Item_Invulnerability;
	FGameplayTag GameplayCue_Item_LifeSteal;
	
	FGameplayTag GameplayCue_Item_Zenith;
	FGameplayTag GameplayCue_Item_Vulcan;
	FGameplayTag GameplayCue_Item_Rusty;
	FGameplayTag GameplayCue_Item_Common;

	/*
	 * Area Tags
	 */

	FGameplayTag GameplayCue_Area_HealthUp;
	FGameplayTag GameplayCue_Area_MoveSpeedUp;
	FGameplayTag GameplayCue_Area_AttackRangeUp;
	FGameplayTag GameplayCue_Area_AttackDamageUp;
	FGameplayTag GameplayCue_Area_LifeStealUp;
	FGameplayTag GameplayCue_Area_MoveSpeedDown;

	/*
	 * Hit React Cue Tags
	 */
	FGameplayTag GameplayCue_HitReact;

	/*
	 * Shake Cue Tags
	 */
	FGameplayTag GameplayCue_Shake;

	/*
	 * Maps for quick lookups
	 */
	TMap<FGameplayTag, FGameplayTag> CharacterTypeToOmegaAbilities;
	TMap<FGameplayTag, TArray<FGameplayTag>> CharacterTypeToSkills;

	/*
	 * Shield Effect Tag
	 */

	FGameplayTag Shield_Status_Using;
	FGameplayTag Shield_Status_Timer;
	FGameplayTag Shield_Status_Repaired;
	FGameplayTag Shield_Status_Broken;

	/*
	 * Ability Sequence Tag
	 */
	FGameplayTag Event_AbilitySequence_Next;

	/*
	 * Status Tag
	 */

	FGameplayTag Status_Charging;

	/*
	 * HitType Tag
	 */
	FGameplayTag HitType_Normal;
	FGameplayTag HitType_Heavy;
	FGameplayTag HitType_Dot;

	/*
	 * HitReact Block Tag
	 */
	FGameplayTag Block_HitReact;
	FGameplayTag Block_Impulse;

	/*
	 * KnockBack force
	 */
	FGameplayTag Knockback_Force;

	/*
 * Sound Level Tags
 */
	FGameplayTag Sound_Level_Lobby;
	FGameplayTag Sound_Level_MainMenu;
	FGameplayTag Sound_Level_Stage_Normal;
	FGameplayTag Sound_Level_Stage_Boss;

	/*
	 * Sound Situation Tags
	 */
	FGameplayTag Sound_Situation_Combat;
	FGameplayTag Sound_Situation_Boss;

private:
	static FOmochaGameplayTags GameplayTags;
};
