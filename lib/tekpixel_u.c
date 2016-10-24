/*
** tekpixel_u.c for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/lib
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Sat Oct 22 03:29:46 2016 Zouz
** Last update Sat Oct 22 03:56:49 2016 Zouz
*/

#include <lapin.h>

void		tekpixel_u(t_bunny_pixelarray *pix,
			   t_bunny_position *pos,
			   unsigned int color)
{
  unsigned	*pixel;
  int		i;

  if (pos[0].x < 0 || pos[0].y < 0)
    return;
  if (pos->x > pix->clipable.buffer.width ||
      pos->y > pix->clipable.buffer.height)
    return;
  i = pix->clipable.buffer.width * pos->y + pos->x;
  pixel = (unsigned *)pix->pixels;
  pixel[i] = color;
}
