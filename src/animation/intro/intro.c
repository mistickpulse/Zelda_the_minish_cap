/*
** intro.c for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/src/intro
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Thu Oct 20 15:38:31 2016 Zouz
** Last update Thu Oct 20 17:31:28 2016 Zouz
*/

#include <lapin.h>
#include "core_struct/core_struct.h"
#include "sprite_path"

# define NBR_RAY 3
# define SIZE_RAY_Y 160
# define SIZE_RAY_X 237
# define BTWEEN_RAY 3

# define BACK_GROUND_START_X 241
# define BACK_GROUND_START_Y 0
# define BACK_GROUND_SIZE_X 237
# define BACK_GROUND_SIZE_Y 160

void			*intro(t_core *core)
{
  static int		mod;
  t_bunny_pixelarray	*img;

  if (core->sprite->sprite_intro == NULL)
    if ((img = bunny_load_pixelarray(SPRITE_AMINATION_INTRO)) == NULL)
      {
	printf("Je sors car null\n");
	return (NULL);
      }
  //  draw(core->sprite->sprite_intro, );
}
