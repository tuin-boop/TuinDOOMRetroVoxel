// The release project normally gets WinMain from SDL2main.lib. The portable
// MinGW/LLVM build used for the provided binary needs the GNU CRT entry point.
#if defined(__MINGW32__)

#include <Windows.h>
#include "SDL.h"
#include "SDL_main.h"

int WINAPI WinMain(HINSTANCE instance, HINSTANCE previous, char *commandline, int show)
{
    (void)instance;
    (void)previous;
    (void)commandline;
    (void)show;

    SDL_SetMainReady();
    return SDL_main(__argc, __argv);
}

#endif
