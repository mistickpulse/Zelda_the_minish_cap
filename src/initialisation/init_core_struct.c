/*
** init_core_struct.c for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/src/initialisation
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Mon Sep 19 08:11:40 2016 Zouz
** Last update Sat Oct 22 14:23:39 2016 Zouz
*/

#include <stdlib.h>
#include "core_struct/core_struct.h"
#include "functions.h"
#include "index_define/index.h"
#include "animation.h"
#include "loop_part.h"

static t_sprite			*init_sprites_al(void)
{
  t_sprite			*ret;

  ret = malloc(sizeof(t_sprite));
  ret->sprite_intro = malloc(sizeof(t_sprite_intro));
  ret->sprite_intro->intro = NULL;
  return (ret);
}

static void			init_var(t_core_struct *core)
{
  core->loop_index = ANIMATION_INDEX;
  core->animation_ref = 0;
  core->animation_index = SELEC_INTRO;
}

static t_out_game_menu		*init_out_game_menu(void)
{
  t_out_game_menu		*to_return;

  if ((to_return = malloc(sizeof(t_out_game_menu))) == NULL)
    return (NULL);
  return (to_return);
}

static int		init_main_disp(t_core_struct *core, int size_x, int size_y)
{
  if ((core->display.main_window = bunny_start(size_x, size_y, false, "Zelda The minish cap")) == NULL)
    return (EXIT_FAILURE);
  core->display.main_pix = bunny_new_pixelarray(size_x, size_y);
  return (EXIT_SUCCESS);
}

t_core_struct		*init_core_struct(int size_x, int size_y)
{
  t_core_struct		*to_return;
  int			ref_x;
  int			ref_y;

  ref_x = (size_x == 0) ? BASIC_SIZE_SCREEN_X : size_x;
  ref_y = (size_y == 0) ? BASIC_SIZE_SCREEN_Y : size_y;
  if (((to_return = malloc(sizeof(t_core_struct))) == NULL)||
      ((init_main_disp(to_return, ref_x, ref_y)) == EXIT_FAILURE))
    return (NULL);
  to_return->out_game_menu = init_out_game_menu();
  init_var(to_return);
  to_return->sprites = init_sprites_al();
  return (to_return);
}
