class CCitadel_IdolCashIn : public CCitadelTriggerMultiCapturePoint
{
	CHandle< CBaseEntity > m_hDropOffPlayer;
	int32 m_nGold;
	int32 m_nTeamBias;
	int32 m_nAmberNetworth;
	int32 m_nSapphireNetworth;
	bool m_bGiveUpHasWarned;
	bool m_bGivenUp;
	bool m_bWasBlockedAtAnyPoint;
	ParticleIndex_t m_nZoneParticle;
	bool m_bCashedIn;
};
