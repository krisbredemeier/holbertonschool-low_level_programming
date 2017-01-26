#include <SDL2/SDL.h>
#include "this.h"

int init_sdl(t_sdl *sdl)
{
  SDL_Window *window;
    if(SDL_init_SubSystem(SDL_INIT_VIDEO) != 0)
    {
      /* if it didn't work */
      fprintf(stderr, MESSAGE_ERROR_INIT_SDL);
      return(CODE_ERROR_INIT_SDL);
    }

    window = SDL_CreateWindow("AMAZING!!!"), SDL_WINDOWSPOS_CENTERED, SDL_WINDOWSPOS_CENTERED, 640, 480, SDL_W
    return(0)

}
