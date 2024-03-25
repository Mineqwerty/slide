void scroll_stage14_Cube_002_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 54;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(stage14_Cube_002_mesh_layer_1_vtx_0);

	deltaY = (int)(-1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_level_geo_stage14() {
	scroll_stage14_Cube_002_mesh_layer_1_vtx_0();
};
