// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_IdolCashInVData",
//	"m_IdleParticleFriendly": "",
//	"m_IdleParticleEnemy": "",
//	"m_HitParticleFriendly": "",
//	"m_HitParticleEnemy": "",
//	"m_EndParticleFriendly": "",
//	"m_EndParticleEnemy": "",
//	"m_flHoverHeight": -50.000000,
//	"m_strCashInLoopSound": "",
//	"m_strCashInLoopStartSound": "",
//	"m_strCashInLoopEndSound": "",
//	"m_strSwitchTeamSound": "",
//	"m_strSwitchOpponentSound": "",
//	"m_flPhysicsRadius": 10.000000,
//	"m_flFallGravity": 2.000000,
//	"m_flCashInTime": 5.000000,
//	"m_flCashInTimeFavored": 5.000000,
//	"m_flCashInTimeUnfavored": 8.000000,
//	"m_flCashInTimeExtension": 1.250000,
//	"m_AuraModifier":
//	{
//	},
//	"m_ComebackAuraModifier":
//	{
//	}
//}
class CCitadel_IdolCashInVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticleFriendly;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticleEnemy;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticleFriendly;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticleEnemy;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EndParticleFriendly;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EndParticleEnemy;
	float32 m_flHoverHeight;
	// MPropertyStartGroup = "Sounds"
	CSoundEventName m_strCashInLoopSound;
	CSoundEventName m_strCashInLoopStartSound;
	CSoundEventName m_strCashInLoopEndSound;
	CSoundEventName m_strSwitchTeamSound;
	CSoundEventName m_strSwitchOpponentSound;
	// MPropertyStartGroup = "Physics"
	float32 m_flPhysicsRadius;
	float32 m_flFallGravity;
	// MPropertyStartGroup = "Gameplay"
	float32 m_flCashInTime;
	float32 m_flCashInTimeFavored;
	float32 m_flCashInTimeUnfavored;
	float32 m_flCashInTimeExtension;
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier;
	CEmbeddedSubclass< CBaseModifier > m_ComebackAuraModifier;
};
