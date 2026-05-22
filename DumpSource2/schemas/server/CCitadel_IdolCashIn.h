// MNetworkVarNames = "GameTime_t m_tStartTime"
// MNetworkVarNames = "GameTime_t m_tCashInTime"
class CCitadel_IdolCashIn : public CCitadelAnimatingModelEntity
{
	int32 m_nGold;
	Vector m_vHomePosition;
	Vector m_vGroundOrigin;
	int32 m_nTeamBias;
	// MNetworkEnable
	GameTime_t m_tStartTime;
	// MNetworkEnable
	GameTime_t m_tCashInTime;
};
