#include <SDL2/SDL.h>

int main(void)
{
  SDL_Instance instance;
  if (init_instance(&instance) != 0)
    return (1);
  return (0);

  while ("C is awesome")
  {
    SDL_SetRenderDrawColor(instance.renderer, 0, 0, 0, 0);
    SDL_RenderClear(instance.renderer);
    if (poll_events() == 1)
      break;
    draw_stuff(instance);
    SDL_RenderPresent(instance.renderer);
  }
  SDL_DestroyRenderer(instance.renderer);
  SDL_DestroyWindow(instance.window);
  SDL_Quit();
  return (0);
  // SDL_Window *window;
  // SDL_Renderer *renderer;
}

void draw_stuff(SDL_Instance instance)
{
  SDL_SetRenderDrawColor(instance.renderer, 0xFF, 0xFF, 0xff, 0xFF);
  SDL_RenderDrawLine(instance.renderer, 10, 10, 100, 100);
}

int poll_events()
{
  SDL_Event event;
  SDL_KeyboardEvent key;

  while (SDL_PollEvent(&event))
  {
    switch(event.type)
    {
      case SDL_QUIT;
        return (1);
      case SDL_KEYDOWN:
        key - event.key;
        /* if 'ESCAPE' s passed */
        if (key..keysym.scancode == 0x29)
          return (1);
        break;
    }
  }
  return (0);
}






//
// #include <stdio.h>
// #include <math.h>
//
// int toIsometric2D(double x, double y,double z, double *u, double*v){
//     *u=(x-z)/sqrt(2);
//     *v=(x+2*y+z)/sqrt(6);
//     return 0;
// }
//
// int main(){
//     int n=10;
//     double z[n][n];
//     int i,j;
//
//     for(i=0;i<9;i++){
//         for(j=0;j<9;j++){
//             z[i][j]=0;
//         }
//     }
//
//     for(i=2;i<8;i++){
//         for(j=2;j<8;j++){
//             z[i][j]=9;
//         }
//     }
//
//     for(i=4;i<6;i++){
//         for(j=4;j<6;j++){
//             z[i][j]=-5;
//         }
//     }
//
//     double u[n][n];
//     double v[n][n];
//
//     for(i=0;i<9;i++){
//         for(j=0;j<9;j++){
//             toIsometric2D(i, j,z[i][j], &u[i][j],&v[i][j]);
//         }
//     }
//
//     //print to file -> gnuplot
//
//     FILE* fp;
//     fp=fopen("data.dat","w");
//     for(i=0;i<9;i++){
//         for(j=0;j<9;j++){
//             fprintf(fp,"%g %g %g\n",u[i][j],v[i][j],z[i][j]);
//         }
//     }
//
//     fclose(fp);
// }
