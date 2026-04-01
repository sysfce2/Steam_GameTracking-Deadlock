class CIcePathShardGenerator
{
	ice_path_shard_model_desc_t m_icePathModelDesc;
	CStrongHandle< InfoForResourceTypeCModel > m_hBaseModel;
	ice_path_shard_model_desc_t m_icePathSurfModelDesc;
	CStrongHandle< InfoForResourceTypeCModel > m_hSurfModel;
	float32 m_flRadius;
	CUtlVector< Vector > m_vecPreviousShard;
	Vector m_vecPreviousShardOrigin;
	Vector m_vecPreviousPreviousShardOrigin;
	CUtlVector< Vector > m_vecUnitCirclePoints;
	CUtlVector< Vector > m_vPrevFrontEdgeVerts;
};
