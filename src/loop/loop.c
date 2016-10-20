/*
** loop.c for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/src/loop
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Mon Sep 19 20:45:07 2016 Zouz
** Last update Thu Oct 20 15:46:07 2016 Zouz
*/

#include <lapin.h>
#include "loop_part.h"
#include "core_struct/core_struct.h"
#include "index_define/index.h"

t_loop_part	part_tab[] =
  {
    {ANIMATION_INDEX, &animation}
    {OUT_GAME_MENU_INDEX, NULL},
    {0, NULL},
  };

t_bunny_response	main_loop(void *data)
{
  t_core_struct		*core;
  int			i;

  i = 0;
  core = (t_core_struct*)data;
  while (part_tab[i])
    {
      if (core->loop_index == part_tab[i].index)
	part_tab[i].act(core);
      ++i;
    }
  return (GO_ON);
}
