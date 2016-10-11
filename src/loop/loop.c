/*
** loop.c for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/src/loop
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Mon Sep 19 20:45:07 2016 Zouz
** Last update Tue Sep 20 23:43:00 2016 Zouz
*/

#include <lapin.h>
#include "core_struct/core_struct.h"
#include "index_define/index.h"

t_bunny_response	main_loop(void *data)
{
  t_core_struct		*core;

  core = (t_core_struct*)data;
  if (core->loop_index == OUT_GAME_MENU_INDEX)
    {
      //fonction qui print fait le menu;
    }
  return (GO_ON);
}
