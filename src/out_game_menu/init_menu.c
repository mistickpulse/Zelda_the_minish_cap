/*
** init_menu.c for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/src/out_game_menu
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Wed Sep 28 17:30:10 2016 Zouz
** Last update Wed Sep 28 17:50:27 2016 Zouz
*/

#include <stdlib.h>
#include "core_struct/core_struct.h"
#include "path/sprite_path.h"

static t_sprite_menu    *init_sprite_menu(void)
{
  t_sprite_menu *to_return;

  if ((to_return = malloc(sizeof(t_sprite_menu))) == NULL)
    return (NULL);
  if (((to_return->out_game_menu = malloc(sizeof(t_sprite_out_game_menu))) == NULL)||
      ((to_return->in_game_menu = malloc(sizeof(t_sprite_in_game_menu))) == NULL))
    return (NULL);
  if ((to_return->out_game_menu->out_game_menu = bunny_load_pixelarray(SPRITE_PATH_OUT_GAME_MENU)) == NULL)
    return (NULL);
  if (((to_return->in_game_menu->menu_core =
	bunny_load_pixelarray(SPRITE_PATH_IN_GAME_MENU_CORE)) == NULL)||
      ((to_return->in_game_menu->menu_lucky_fragment =
	bunny_load_pixelarray(SPRITE_PATH_IN_GAME_MENU_LUCKY_FRAGMENT)) == NULL))
    return (NULL);
  return (to_return);
}

int		init_menu(t_core_struct *core)
{
  t_sprite	*to_return;

  if ((to_return = malloc(sizeof(t_sprite))) == NULL)
    return (EXIT_FAILURE);
  if ((to_return->sprite_menu = init_sprite_menu()) == NULL)
    return (EXIT_FAILURE);
  core->sprites = to_return;
  return (EXIT_SUCCESS);
}
