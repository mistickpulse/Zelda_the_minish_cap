/*
** functions.h for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/include
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Mon Sep 19 20:18:21 2016 Zouz
** Last update Wed Sep 28 17:47:12 2016 Zouz
*/

#ifndef FUNCTIONS_H_
# define FUNCTIONS_H_

#include "sprite/sprite.h"
#include "core_struct/core_struct.h"

t_bunny_response	keyboard(t_bunny_event_state type, t_bunny_keysym key, void *data);
int			init_menu(t_core_struct *core);
t_core_struct		*init_core_struct(int size_x, int size_y);
t_bunny_response	main_loop(void *data);

#endif /* !FUNCTIONS_H_ */
