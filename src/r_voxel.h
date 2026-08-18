/* KVX voxel support for DOOM Retro. */
#pragma once

#include "doomdef.h"

void VX_Init(void);
void VX_ClearVoxels(void);
bool VX_ProjectVoxel(mobj_t *thing, fixed_t gx, fixed_t gy, fixed_t gz);
void VX_DrawVoxel(const vissprite_t *spr);
