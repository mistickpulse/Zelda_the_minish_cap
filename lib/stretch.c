/*
** stretch.c for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/lib
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Sat Oct 22 18:32:30 2016 Zouz
** Last update Mon Oct 24 02:23:06 2016 Zouz
*/

#include <lapin.h>
#include <math.h>

/*
  Function wich gonna deserve to resize pixelarray
  for load sprites with the good size screen option;
*/

void		scale(t_bunny_position *pos, int quot_x, int quot_y)
{

}

void		stretch(t_bunny_pixelaraay *src, t_bunny_pixelaraay *dest)
{
  int		quot_x;
  int		quot_y;

  quot_x = round(dest->clipable.buffer.width / src->clipable.buffer.width);
  quot_y = round(dest->clipable.buffer.height / src->clipable.buffer.height);

}
