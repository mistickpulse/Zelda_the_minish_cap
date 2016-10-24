/*
** get_colors_u.c for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/lib
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Sat Oct 22 03:30:20 2016 Zouz
** Last update Sat Oct 22 04:01:59 2016 Zouz
*/

#include <lapin.h>

unsigned int		get_colors_u(t_bunny_pixelarray *pix,
				     t_bunny_position *pos)
{
  unsigned int		*pic;

  if (pos->y < pix->clipable.buffer.height &&
                        pos->x > 0 && pos->y > 0 &&
      pos->x < pix->clipable.buffer.width)
    {
      pic = pix->pixels;
      return (pic[pos->y * pix->clipable.buffer.width + pos->x]);
    }
  return (0);
}
