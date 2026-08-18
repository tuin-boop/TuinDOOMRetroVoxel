# Tuin DOOM Retro Voxel

A custom build of [DOOM Retro](https://github.com/bradharding/doomretro) 6.3.1
with software-rendered KVX voxels and focused support for loading Voxel Doom's
resources from a PK3/ZIP file.

This is an unofficial community project directed and tested by **Tuin**. It
keeps DOOM Retro's look and feel while allowing decorations, pickups, monsters,
corpses and other mapped sprites to remain voxels from every viewing angle.

> [!IMPORTANT]
> This is **not general GZDoom PK3 support**. The loader recognizes
> `VOXELDEF`, `VOXELDEF.txt`, and `.kvx` files inside `voxels/`. Features such
> as ZScript, DECORATE, MODELDEF, GLDEFS and arbitrary packaged replacements
> are not supported.

## Download

Download the latest Windows ZIP from the
[Releases page](https://github.com/tuin-boop/TuinDOOMRetroVoxel/releases/latest).

The release does not contain DOOM, Voxel Doom, SIGIL, or other commercial or
third-party game data.

## What you supply

- A legally obtained DOOM IWAD, such as `doom.wad` or `doom2.wad`.
- For voxels, `VoxelDoom_v2.4.pk3`, downloaded separately from Voxel Doom's
  official distribution.
- Optionally, compatible map WADs such as SIGIL.

## Install and run

1. Extract the release ZIP into a new folder.
2. Put your legally obtained IWAD in that folder, or use its full path.
3. Download and place `VoxelDoom_v2.4.pk3` wherever you prefer.
4. Start the game with the PK3 last in the load order:

```text
doomretro.exe -iwad doom.wad -file VoxelDoom_v2.4.pk3
```

With an additional map WAD:

```text
doomretro.exe -iwad "C:\Games\DOOM\doom.wad" -file "C:\Games\DOOM\SIGIL.wad" "C:\Games\DOOM\VoxelDoom_v2.4.pk3"
```

You can also use DOOM Retro's launcher to select the files.

## Highlights

- Focused PK3/ZIP loading for `VOXELDEF` and `voxels/*.kvx` resources.
- An 8-bit software voxel renderer integrated with lighting, sector tinting,
  clipping, sprite sorting, fuzz effects and liquid behavior.
- World-fixed voxel orientation, with viewer-facing behavior retained only for
  sphere models authored to require it.
- Correct KVX pivots, floor placement and close-range clipping.
- Fixes for horizontal rasterization gaps and edge-of-screen crashes.
- Voxel blood follows DOOM Retro's monster-specific blood colors, including
  blue cacodemon blood and green hell knight/baron blood.
- Optional DOOM Retro freelook remains available (`freelook on` in the console).

More implementation and compatibility details are in [VOXELS.md](VOXELS.md).
The packaged download also includes a complete `README.txt`.

## Credits

- **Tuin** conceived and directed this custom project and provided the testing,
  screenshots and bug reports used to develop and verify it.
- **Brad Harding** created and maintains DOOM Retro. This project is based on
  DOOM Retro 6.3.1 and is not an official DOOM Retro release.
- **Cheello (Daniel Peterson)** created Voxel Doom and its voxel artwork. Voxel
  Doom is a separate project and is not included or redistributed here.
- **id Software** created DOOM. DOOM game data and trademarks belong to their
  respective owners and are not included here.

## License and trademarks

The source code is distributed under the GNU General Public License v3 or
later; see [LICENSE.md](LICENSE.md). DOOM Retro and DOOM retain their respective
copyrights and trademarks. This project is not affiliated with or endorsed by
Brad Harding, Cheello, id Software, Bethesda, or ZeniMax.
