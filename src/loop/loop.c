/*
** loop.c for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/src/loop
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Mon Sep 19 20:45:07 2016 Zouz
** Last update Sat Oct 22 18:31:42 2016 Zouz
*/

#include <lapin.h>
#include <stdio.h>
#include "loop_part.h"
#include "core_struct/core_struct.h"
#include "index_define/index.h"
#include "functions.h"
#include "libgraph.h"

t_loop_part	part_tab[] =
  {
    {ANIMATION_INDEX, &animation},
    {OUT_GAME_MENU_INDEX, NULL},
    {0, NULL},
  };

static void		bunny_reset(t_bunny_pixelarray *pix)
{
  t_bunny_position	pos;

  pos.y = 0;
  while (pos.y != pix->clipable.buffer.height)
    {
      pos.x = 0;
      while (pos.x != pix->clipable.buffer.width)
	{
	  tekpixel_u(pix, &pos, BLACK);
	  pos.x += 1;
	}
      pos.y += 1;
    }
}

t_bunny_response	main_loop(void *data)
{
  t_core_struct		*core;
  int			i;

  i = 0;
  core = (t_core_struct*)data;
  bunny_reset(core->display.main_pix);
  while (part_tab[i].act)
    {
      if (core->loop_index == part_tab[i].index)
	part_tab[i].act(core);
      ++i;
    }
  bunny_blit(&core->display.main_window->buffer, &core->display.main_pix->clipable, NULL);
  bunny_display(core->display.main_window);
  return (GO_ON);
}
