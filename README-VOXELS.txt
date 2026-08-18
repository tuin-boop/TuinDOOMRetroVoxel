DOOM RETRO 6.3.1 - VOXELDOOM ENABLED BUILD
===========================================

This is a custom 64-bit Windows build of DOOM Retro 6.3.1 with focused support
for loading VOXELDEF and KVX voxel resources from a PK3/ZIP container.

This is not general-purpose PK3 mod support. The loader intentionally recognizes
VOXELDEF, VOXELDEF.txt and .kvx files inside voxels/ directories. Other PK3
features used by advanced source ports, including ZScript, DECORATE, MODELDEF,
GLDEFS and arbitrary packaged resources, are not supported by this build.

This package does NOT include DOOM, SIGIL, VoxelDoom, or any other commercial
or third-party game data. Supply your own legally obtained IWAD and download
VoxelDoom separately if you want to use it.


WHAT YOU NEED TO SUPPLY YOURSELF
--------------------------------

Required:

* A legally obtained DOOM IWAD, such as doom.wad or doom2.wad. The IWAD contains
  the original game data and is not included in this package.

Required for voxels:

* VoxelDoom_v2.4.pk3 by Cheello. Download it separately and add it to the load
  order yourself. The PK3 is not included, copied, altered or redistributed by
  this package.

Optional:

* Any compatible map or episode WAD you want to play, such as SIGIL. These are
  also not included. Load map/mod WADs before VoxelDoom_v2.4.pk3.


INSTALLATION
------------

1. Extract every file in this ZIP into a new folder.
2. Put your DOOM IWAD in that folder, or give its full path on the command line.
3. Put VoxelDoom_v2.4.pk3 wherever you prefer. It is deliberately not included.

Example for the original DOOM:

  doomretro.exe -iwad doom.wad -file VoxelDoom_v2.4.pk3

Example with an additional map WAD and paths containing spaces:

  doomretro.exe -iwad "C:\Games\DOOM\doom.wad" -file "C:\Games\DOOM\SIGIL.wad" "C:\Games\DOOM\VoxelDoom_v2.4.pk3"

Place the voxel PK3 after map/mod WADs in the -file list so its voxel resources
are loaded later. You can also use DOOM Retro's launcher to choose the files.


FREELOOK
--------

Press the backtick key (`) in the game to open the console, then enter:

  freelook on

Optional commands:

  autoaim off
  m_sensitivity_vertical 32
  m_invertyaxis off

DOOM Retro's software freelook is a vertical view shift, not a true 3D camera
rotation, so it cannot look directly through a full 90 degrees up or down.


WHAT WAS ADDED
--------------

* Focused PK3/ZIP loading for VOXELDEF and voxels/*.kvx resources.
* VOXELDEF parsing and KVX voxel model loading.
* An 8-bit software voxel renderer integrated with DOOM Retro's lighting,
  sector tinting, clipping, sprite sorting, fuzz effect and liquid behavior.
* VoxelDoom sprite-name aliases for its optional sphere models.
* Fixed world orientation for normal voxels. Armor, weapons, bonuses, barrels,
  decorations, monsters and corpses no longer turn as the player looks around.
* Viewer-facing behavior only for the invulnerability, partial invisibility,
  soul sphere and megasphere models, which are authored to require it.


IMPORTANT FIXES IN THIS BUILD
-----------------------------

* Corrected KVX 8.8 pivot conversion so models sit at the proper height.
* Fixed out-of-bounds drawing that could crash near large/close voxel models.
* Fixed an edge-of-screen crash while drawing voxelized spectres with DOOM
  Retro's 2x2 fuzz effect.
* Fixed close-range and near-plane clipping while keeping models as voxels.
* Fixed floor/liquid sinking and clipping.
* Fixed one-pixel rasterization seams that appeared as open horizontal stripes
  across all voxel models.
* Prevented DOOM Retro's random player-corpse sprite translation from corrupting
  the authored colors of detailed voxel corpses.
* Applied DOOM Retro's monster-specific blood colors to voxelized blood, such
  as blue blood for cacodemons and green blood for hell knights and barons.
* Kept lighting and non-corpse player translations consistent on every face.


LOAD-ORDER NOTE
---------------

VoxelDoom_v2.4.pk3 remains an external mod. Add it yourself in the desired load
order; this executable and ZIP do not contain or modify that PK3.


CREDITS
-------

* Tuin conceived and directed this custom voxel-enabled DOOM Retro project and
  provided the hands-on testing, screenshots and detailed bug reports used to
  identify and verify its rendering fixes.

* DOOM Retro was created and is maintained by Brad Harding. This custom build
  is based on DOOM Retro 6.3.1 and is not an official DOOM Retro release.

* The voxel models used during development and supported by this build are from
  Cheello's Voxel Doom, created by Cheello (Daniel Peterson). Voxel Doom remains
  a separate third-party mod and is not included in this package.

* DOOM was created by id Software. DOOM game data and trademarks belong to
  their respective owners and are not included in this package.

Thanks to Tuin for making the project happen, to Brad Harding for DOOM Retro,
and to Cheello for creating and providing the voxel artwork that made this
voxel-enabled build worth making.
