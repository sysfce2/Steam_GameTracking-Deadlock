class CCitadel_KothCashIn : public CCitadelTriggerMultiCapturePoint
{
	float32 m_flAmberFavored;
	float32 m_flSapphireFavored;
	int32 m_iWinningTeam;
	int32 m_iTroopersToSpawn;
	CHandle< CBaseEntity > m_hDropOffPlayer;
	int32 m_nGold;
	int32 m_nTeamBias;
	int32 m_nKOTHIdx;
	int32 m_nAmberNetworth;
	int32 m_nSapphireNetworth;
	int32 m_nAmberGoldValue;
	int32 m_nSapphireGoldValue;
	bool m_bGiveUpHasWarned;
	bool m_bGivenUp;
	bool m_bWasBlockedAtAnyPoint;
	ParticleIndex_t m_nZoneParticle;
	bool m_bCashedIn;
	bool m_bPlayBlock;
	bool m_bPlayContested;
};
