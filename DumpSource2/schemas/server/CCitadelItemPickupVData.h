// MGetKV3ClassDefaults = {
//	"_class": "CCitadelItemPickupVData",
//	"m_AmbientParticle": ""
//}
class CCitadelItemPickupVData : public CEntitySubclassVDataBase
{
	// MPropertyGroupName = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle;
};
