// MNetworkVarNames = "CHandle<CCitadelZipLineNode> m_vecConnections"
// MNetworkVarNames = "int m_vecConnectionDir"
// MNetworkVarNames = "Vector m_vTangentIn"
// MNetworkVarNames = "Vector m_vTangentOut"
// MNetworkVarNames = "float m_flCumulativeDistance"
// MNetworkVarNames = "int16 m_iNodeIndex"
// MNetworkVarNames = "int16 m_eCaptureState"
// MNetworkVarNames = "int16 m_iPrimaryLane"
// MNetworkVarNames = "bool m_bUseBaseLaneColor"
// MNetworkVarNames = "int16 m_nRopesParity"
// MNetworkVarNames = "bool m_bCornerNode"
// MNetworkVarNames = "bool m_bCapturable"
// MNetworkVarNames = "bool m_bDisableZippingToByPlayers"
// MNetworkVarNames = "float m_flSpeedMultiplierToBaseBonus"
// MNetworkVarNames = "float m_flSpeedMultiplierFromBaseBonus"
// MNetworkVarNames = "EHANDLE m_hGuardingBosses"
// MNetworkVarNames = "float m_flRopeRadius"
class CCitadelZipLineNode : public CBaseModelEntity
{
	// MNetworkEnable
	// MNetworkChangeCallback = "connectionsChanged"
	// MNotSaved
	CNetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections;
	// MNetworkEnable
	// MNotSaved
	CNetworkUtlVectorBase< int32 > m_vecConnectionDir;
	// MNetworkEnable
	Vector m_vTangentIn;
	// MNetworkEnable
	Vector m_vTangentOut;
	// MNetworkEnable
	float32 m_flCumulativeDistance;
	CUtlSymbolLarge m_strGuardBossName;
	CUtlSymbolLarge m_strGuardBossName2;
	CUtlSymbolLarge m_strGuardBossName3;
	// MNetworkEnable
	int16 m_iNodeIndex;
	// MNetworkEnable
	// MNotSaved
	int16 m_eCaptureState;
	// MNetworkEnable
	int16 m_iPrimaryLane;
	// MNetworkEnable
	bool m_bUseBaseLaneColor;
	// MNetworkEnable
	// MNotSaved
	int16 m_nRopesParity;
	// MNetworkEnable
	bool m_bCornerNode;
	// MNetworkEnable
	bool m_bCapturable;
	// MNetworkEnable
	bool m_bDisableZippingToByPlayers;
	// MNetworkEnable
	float32 m_flSpeedMultiplierToBaseBonus;
	// MNetworkEnable
	float32 m_flSpeedMultiplierFromBaseBonus;
	// MNetworkEnable
	// MNotSaved
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hGuardingBosses;
	// MNetworkEnable
	float32 m_flRopeRadius;
};
