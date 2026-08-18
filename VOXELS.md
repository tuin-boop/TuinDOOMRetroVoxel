# Focused voxel resource support

This build accepts `.pk3` and `.zip` containers in the same `-file` load order
used for PWADs, but only for its focused voxel-resource implementation. KVX
models under a `voxels/` directory are loaded in a separate namespace, and
`VOXELDEF`/`VOXELDEF.txt` mappings and `AngleOffset` values are applied.

Example:

```text
doomretro.exe -iwad DOOM2.WAD -file VoxelDoom_v2.4.pk3
```

The PK3 stays external; it is not bundled into the executable or release ZIP.
This is not general PK3 mod support. GZDoom-only content such as ZScript,
DECORATE, MODELDEF, GLDEFS, materials and arbitrary replacements is ignored.
The supported voxel model format is KVX.
