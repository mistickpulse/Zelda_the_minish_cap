/*
** core_struct.h for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/core_struct
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Mon Sep 19 07:04:28 2016 Zouz
** Last update Wed Sep 28 17:49:20 2016 Zouz
*/

#ifndef CORE_STRUCT_H_
# define CORE_STRUCT_H_

#include "menu/out_game_menu/out_game_menu.h"
#include "sprite/sprite.h"

typedef struct		s_main_display
{
  t_bunny_window	*main_window;
  t_bunny_pixelarray	*main_pix;
}			t_main_display;

typedef struct		s_core_struct
{
  t_main_display	display;
  t_out_game_menu	*out_game_menu;
  t_sprite		*sprites;
  unsigned int		loop_index;
  unsigned int		animation_ref;
}			t_core_struct;

#endif /* !CORE_STRUCT_H_ */
