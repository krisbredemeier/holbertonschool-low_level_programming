#ifdef __MAZE__
#define __MAZE__

#include <SDL2/SDL.h>



#define MESSAGE_ERROR_INIT_SDL "[Error] can not init: %s\n", SDL_GetError()
#define CODE_ERROR_INIT_SDL 1
#define MESSAGE_ERROR_WINDOW "[Error] can not winddow: %s\n", SDL_GetError()
#define CODE_ERROR_WINDOW 2
#define MESSAGE_ERROR_RENDERER "[Error] can not renderer: %s\n", SDL_GetError()
#define CODE_ERROR_RENDERER 3
#define MESSAGE_ERROR_MALLOC "[Error] can not malloc"
#define CODE_ERROR_MALLOC 4

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480
#define WINDOW_TITLE "C is Awesome"

#define CUBE_SIZE 64


typedef struct s_sdl
{
  SDL_Window *window;
  SDL_Renderer *renderer;
} t_SDL

typedef struct s_map
{
    int w;
    int h;
    char *map;
} t_map

void init_map(t_map *map);
void init_sdl(t_sdl *sdl);
int poll_events(void);
void bye_bye_SDL(t_sdl *sdl);
void maze(t_sdl *sdl);

#endif
