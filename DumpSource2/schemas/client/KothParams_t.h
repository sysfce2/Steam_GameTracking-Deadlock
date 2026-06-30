// MGetKV3ClassDefaults = {
//	"m_flKothRadius": 20.000000,
//	"m_flKothWarningDropHeight": 60.000000,
//	"m_KothEarlyWarningParticle": "",
//	"m_KothSpawnLocationParticle": "",
//	"m_KothOnSpawnParticle": "",
//	"m_strKothSpawnLoopStartSound": "",
//	"m_strKothSpawnLoopSound": "",
//	"m_strKothPreSpawnLoopSound": "",
//	"m_strKothSpawnCompleteSound": ""
//}
class KothParams_t
{
	float32 m_flKothRadius;
	float32 m_flKothWarningDropHeight;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KothEarlyWarningParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KothSpawnLocationParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KothOnSpawnParticle;
	CSoundEventName m_strKothSpawnLoopStartSound;
	CSoundEventName m_strKothSpawnLoopSound;
	CSoundEventName m_strKothPreSpawnLoopSound;
	CSoundEventName m_strKothSpawnCompleteSound;
};
