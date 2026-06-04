// MNetworkVarNames = "uint8 m_nEnableState"
class CCitadelTriggerMultiCapturePoint : public C_BaseTrigger
{
	CCitadelInWorldEventTimer* m_pUIWorldEventTimer;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnMultiEnableStateChanged"
	uint8 m_nEnableState;
};
