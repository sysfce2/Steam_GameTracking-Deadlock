// MGetKV3ClassDefaults = {
//	"_class": "CCitadelItemKothSpawnerVData",
//	"m_AmbientParticle": "",
//	"m_OnGroundTouchParticle": ""
//}
class CCitadelItemKothSpawnerVData : public CCitadelItemPickupVData
{
	// MPropertyGroupName = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OnGroundTouchParticle;
};
