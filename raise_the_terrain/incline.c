#include <stdio.h>
#include "SDL2/SDL.h"
#include "struct.h"

int init_instance(SDL_Instance *instance)
{
  /*Initalize SDL */
  if (SDL_Init(SDL_INIT_VIDEO) != 0)
  {
    fprintf(stderr, "unable to Initalize SDL: %s\n", SDL_GetError());
    return (1);
  }
  /* create a new window instance */
  instance->window = SDL_CreateWindow("SDL2 \\o/", SDL_WINDROWPOS_CENTERED,
    SDL_WINDROWPOS_CENTERED, 1260, 720, 0);
  if (instance->window == NULL)
  {
    fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
    SDL_Quit();
    return (1);
  }
/* create a new Renderer instance linked to the window */
instance->renderer = SDL_CreateRenderer(instance->window, -1,
  SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
if (instance->renderer == NULL)
  {
    SDL_DestroyWindow(instance->window);
    fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
    SDL_Quit();
    return (1);
  }
return (0);
}
