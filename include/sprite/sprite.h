/*
** sprite.h for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/include/struct_sprite
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Mon Sep 19 08:21:06 2016 Zouz
** Last update Mon Sep 19 09:26:11 2016 Zouz
*/

#ifndef SPRITE_H_
# define SPRITE_H_

#include <lapin.h>

typedef struct			s_sprite_out_game_menu
{
  t_bunny_pixelarray		*out_game_menu;
}				t_sprite_out_game_menu;

typedef struct			s_sprite_in_game_menu
{
  t_bunny_pixelarray		*menu_core;
  t_bunny_pixelarray		*menu_lucky_fragment;
}				t_sprite_in_game_menu;

typedef struct			s_sprite_menu
{
  t_sprite_out_game_menu	*out_game_menu;
  t_sprite_in_game_menu		*in_game_menu;
}				t_sprite_menu;

typedef struct			s_sprite_link
{
  t_bunny_pixelarray		*link;
}				t_sprite_link;

typedef struct			s_sprite
{
  t_sprite_menu			*sprite_menu;
  t_sprite_link			*link;
}				t_sprite;

#endif /* !SPRITE_H_ */
