const Collision stage7_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(32),
	COL_VERTEX(3982, -197, 150),
	COL_VERTEX(3982, -477, 150),
	COL_VERTEX(3982, -477, -150),
	COL_VERTEX(3982, -197, -150),
	COL_VERTEX(4282, -477, -150),
	COL_VERTEX(4282, -197, -150),
	COL_VERTEX(4282, -477, 150),
	COL_VERTEX(4282, -197, 150),
	COL_VERTEX(3326, -197, -778),
	COL_VERTEX(3326, -197, 805),
	COL_VERTEX(4938, -197, -778),
	COL_VERTEX(4938, -197, 805),
	COL_VERTEX(3326, -1464, 805),
	COL_VERTEX(4938, -1464, 805),
	COL_VERTEX(4938, -1464, -778),
	COL_VERTEX(3326, -1464, -778),
	COL_VERTEX(-6945, -993, 469),
	COL_VERTEX(-6945, -53, 469),
	COL_VERTEX(-6945, -53, -471),
	COL_VERTEX(-6945, -993, -471),
	COL_VERTEX(-3821, -993, -471),
	COL_VERTEX(-3821, -53, -471),
	COL_VERTEX(-2312, -53, -471),
	COL_VERTEX(-2312, -993, -471),
	COL_VERTEX(-2312, -53, 469),
	COL_VERTEX(-2312, -993, 469),
	COL_VERTEX(-3821, -993, 469),
	COL_VERTEX(-3821, -53, 469),
	COL_VERTEX(3326, 382, 805),
	COL_VERTEX(4938, 382, 805),
	COL_VERTEX(4938, 382, -778),
	COL_VERTEX(3326, 382, -778),
	COL_TRI_INIT(SURFACE_GOAL, 10),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 2, 4),
	COL_TRI(3, 4, 5),
	COL_TRI(4, 6, 7),
	COL_TRI(4, 7, 5),
	COL_TRI(6, 1, 0),
	COL_TRI(6, 0, 7),
	COL_TRI(2, 1, 6),
	COL_TRI(2, 6, 4),
	COL_TRI_INIT(SURFACE_NO_CAM_COLLISION, 42),
	COL_TRI(3, 8, 9),
	COL_TRI(3, 9, 0),
	COL_TRI(5, 10, 8),
	COL_TRI(5, 8, 3),
	COL_TRI(7, 11, 10),
	COL_TRI(7, 10, 5),
	COL_TRI(7, 0, 9),
	COL_TRI(7, 9, 11),
	COL_TRI(11, 9, 12),
	COL_TRI(11, 12, 13),
	COL_TRI(8, 10, 14),
	COL_TRI(8, 14, 15),
	COL_TRI(10, 11, 13),
	COL_TRI(10, 13, 14),
	COL_TRI(9, 8, 15),
	COL_TRI(9, 15, 12),
	COL_TRI(14, 13, 12),
	COL_TRI(14, 12, 15),
	COL_TRI(16, 17, 18),
	COL_TRI(16, 18, 19),
	COL_TRI(20, 21, 22),
	COL_TRI(20, 22, 23),
	COL_TRI(23, 22, 24),
	COL_TRI(23, 24, 25),
	COL_TRI(26, 27, 17),
	COL_TRI(26, 17, 16),
	COL_TRI(20, 23, 25),
	COL_TRI(20, 25, 26),
	COL_TRI(21, 18, 17),
	COL_TRI(21, 17, 27),
	COL_TRI(19, 20, 26),
	COL_TRI(19, 26, 16),
	COL_TRI(25, 24, 27),
	COL_TRI(25, 27, 26),
	COL_TRI(19, 18, 21),
	COL_TRI(19, 21, 20),
	COL_TRI(9, 28, 29),
	COL_TRI(9, 29, 11),
	COL_TRI(10, 30, 31),
	COL_TRI(10, 31, 8),
	COL_TRI(11, 29, 30),
	COL_TRI(11, 30, 10),
	COL_TRI_INIT(SURFACE_VERTICAL_BOOST, 2),
	COL_TRI(22, 21, 27),
	COL_TRI(22, 27, 24),
	COL_TRI_STOP(),
	COL_END()
};
