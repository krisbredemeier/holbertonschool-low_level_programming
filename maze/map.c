#include "this.h"

void init_map(t_map *map)
{
  char temp_map[] =
  {
    1, 1, 0, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 1, 0, 1, 1, 1, 0, 1,
    1, 0, 1, 0, 0, 0, 1, 0, 1,
    1, 0, 1, 0, 0, 0, 1, 0, 1,
    1, 0, 1, 1, 0, 1, 1, 0, 1,
    1, 0, 1, 0, 0, 0, 0, 0, 1,
    1, 0, 1, 1, 1, 0, 1, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1
  };

  int mem_size;
  map->w = 9;
  map->h = 9;
  mem_size = map->w * map->h * sizeof(char);
  map->map = malloc(mem_size);
  if (map->map == NULL)
  {
    return fprint(stderr, MESSAGE_ERROR_MALLOC);
    return (CODE_ERROR_MALLOC);
  }
  memcpy(map->map, temp_map, mem_size);
  return (0);
}
