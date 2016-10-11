/*
** keyboard.c for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/src/keyboard
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Tue Sep 20 23:44:53 2016 Zouz
** Last update Mon Sep 26 16:17:46 2016 Zouz
*/

#include <lapin.h>

t_bunny_response	keyboard(t_bunny_event_state type,
				 t_bunny_keysym key,
				 void *data)
{
  (void)type;
  (void)data;
  if (key == BKS_ESCAPE)
    return (EXIT_ON_SUCCESS);
  return (GO_ON);
}
