/*
** map.h for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/include
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Tue Aug 30 19:08:50 2016 Zouz
** Last update Mon Sep 19 06:46:52 2016 Zouz
*/

#ifndef MAP_H_
# define MAP_H_

#include "entities/mob.h"

typedef struct			s_game_map
{
  char				**core_map;
  struct s_game_map		*map_up;
  struct s_game_map		*map_down;
  struct s_game_map		*map_left;
  struct s_game_map		*map_right;
  t_game_mob			*mobs;

  /* t_game_map_hiden		*hiden_map; */
  /* t_game_pnjs		*pnjs; */
  /* t_game_objs		*objs; */
  /* t_game_objs_special	*objs_special; */
}				t_game_map;

#endif /* !MAP_H_ */
