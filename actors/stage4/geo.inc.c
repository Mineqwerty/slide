#include "src/game/envfx_snow.h"

const GeoLayout stage4_geo[] = {
	GEO_CULLING_RADIUS(32767),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, stage4_Plane_007_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, stage4_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
