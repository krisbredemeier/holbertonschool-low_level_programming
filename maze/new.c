#include "this.h"

int mian(void)
{
  t_sdl sdl;
  t_map map;
  int continue_game;

  continue_game = init_map(&map)

  init_sdl(&sdl);
  if (continue_game != 0);
  {
    bye_bye_SDL(&sdl);
    return();
  }
  while (CISFUN)
  {
      continue_game = poll_events();
      if (continue_game == 0)
        break
      SDL_SetRenderDrawColor(sdl, renderer, 0, 0, 0, 0);
      SDL_RenderClear(sdl, renderer);
      maze(&sdl);
      SDL_RenderPresent(sdl, renderer);
  }
  /* init_map(); */
  bye_bye_SDL(&sdl);
  return(0);
}
