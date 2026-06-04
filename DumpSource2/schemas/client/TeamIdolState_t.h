// MNetworkVarNames = "float m_flCaptureProgressFrac"
// MNetworkVarNames = "int m_nCapturerCount"
// MNetworkVarNames = "bool m_bIsBlocked"
// MNetworkVarNames = "HeroID_t m_vecParticipants"
class TeamIdolState_t
{
	// MNetworkEnable
	float32 m_flCaptureProgressFrac;
	// MNetworkEnable
	int32 m_nCapturerCount;
	// MNetworkEnable
	bool m_bIsBlocked;
	// MNetworkEnable
	C_NetworkUtlVectorBase< HeroID_t > m_vecParticipants;
};
