// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_IdolCashInVData",
//	"m_strPreEnableParticle": "",
//	"m_strOnBecomeEnableParticle": "",
//	"m_strEnabledParticle": "",
//	"m_strOnFullyCapturedParticle": "",
//	"m_EnabledLoopSounds":
//	{
//	},
//	"m_EnemyCapturingLoopSounds":
//	{
//	},
//	"m_FriendlyCapturingLoopSounds":
//	{
//	},
//	"m_EnemyAndFriendlyCapturingLoopSounds":
//	{
//	},
//	"m_strPreEnableStartSound": "",
//	"m_strEnableStartSound": "",
//	"m_strFullyCapturedSound": "",
//	"m_modifierCapturer":
//	{
//	},
//	"m_flDecaySpeed": 0.000000,
//	"m_flTotalTimeToCapture": 13.000000,
//	"m_bDestroyNearbyNeutrals": false,
//	"m_flHoldAtPercent": 99.000000,
//	"m_flStepOutGraceWindow": 0.500000,
//	"m_ZoneParticle": "",
//	"m_EndParticleFriendly": "",
//	"m_EndParticleEnemy": "",
//	"m_AuraModifier":
//	{
//	},
//	"m_ComebackAuraModifier":
//	{
//	},
//	"m_strUrnCashedInSoundFriendly": "",
//	"m_strUrnCashedInSoundEnemy": "",
//	"m_strUrnBlockedSound": "",
//	"m_strUrnBlockedOpponentSound": "",
//	"m_strUrnGiveUpSound": "",
//	"m_strUrnGiveUpTempVocalizeSound": "",
//	"m_strUrnGiveUpWarnSound": "",
//	"m_strUrnCashinLoopSound": "",
//	"m_iComebackBounty": 130,
//	"m_Bonus01":
//	{
//	},
//	"m_flDropOffPlayerBonusPercent": 25.000000,
//	"m_flZoneRadiusMeters": 20.000000,
//	"m_flZoneHeightMeters": 25.000000,
//	"m_flTotalTimeToCaptureFavored": 10.000000,
//	"m_flTotalTimeToCaptureUnfavored": 15.000000,
//	"m_flTimeToGiveUp": 120.000000,
//	"m_flTimeToWarnAboutGivingUp": 110.000000,
//	"m_nGiveUpOrbs": 20
//}
class CCitadel_IdolCashInVData : public CCitadel_MultiCapturePointVData
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZoneParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EndParticleFriendly;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EndParticleEnemy;
	// MPropertyStartGroup = "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier;
	CEmbeddedSubclass< CBaseModifier > m_ComebackAuraModifier;
	// MPropertyStartGroup = "Sounds"
	CSoundEventName m_strUrnCashedInSoundFriendly;
	CSoundEventName m_strUrnCashedInSoundEnemy;
	CSoundEventName m_strUrnBlockedSound;
	CSoundEventName m_strUrnBlockedOpponentSound;
	CSoundEventName m_strUrnGiveUpSound;
	CSoundEventName m_strUrnGiveUpTempVocalizeSound;
	CSoundEventName m_strUrnGiveUpWarnSound;
	CSoundEventName m_strUrnCashinLoopSound;
	// MPropertyStartGroup = "Gameplay"
	int32 m_iComebackBounty;
	CEmbeddedSubclass< CCitadelModifier > m_Bonus01;
	float32 m_flDropOffPlayerBonusPercent;
	float32 m_flZoneRadiusMeters;
	float32 m_flZoneHeightMeters;
	float32 m_flTotalTimeToCaptureFavored;
	float32 m_flTotalTimeToCaptureUnfavored;
	float32 m_flTimeToGiveUp;
	float32 m_flTimeToWarnAboutGivingUp;
	int32 m_nGiveUpOrbs;
};
