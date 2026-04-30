class CCitadel_Modifier_CloakOfOpportunityWatcher : public CCitadel_Modifier_Intrinsic_Base
{
	CUtlStringToken m_nAbilityBlocking;
	GameTime_t m_nAbilityBlockTime;
	CHandle< CBaseEntity > m_hModifierCaster;
};
