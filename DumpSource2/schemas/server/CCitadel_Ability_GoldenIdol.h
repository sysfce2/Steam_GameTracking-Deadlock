class CCitadel_Ability_GoldenIdol : public CCitadel_Ability_BaseHeldItem
{
	int32 m_nGold;
	float32 m_flAmberTime;
	float32 m_flSapphireTime;
	int32 m_nTeamBias;
	GameTime_t m_tAbilityCreateTime;
	GameTime_t m_tLastDamageTime;
	Vector m_vHomePosition;
};
