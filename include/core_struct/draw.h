/*
** draw.c for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/include/core_struct
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Fri Oct 21 16:11:42 2016 Zouz
** Last update Sat Oct 22 15:41:24 2016 Zouz
*/

#ifndef DRAW_H_
# define DRAW_H_

#include <lapin.h>

typedef struct		s_draw
{
  t_bunny_pixelarray	*src;
  t_bunny_pixelarray	*dest;
  t_bunny_position	dest_st;
  t_bunny_position	src_st;
  t_bunny_position	src_ed;
  unsigned int		ignore[4];
  char			transparency;
}			t_draw;

#endif /* !DRAW_H_ */
