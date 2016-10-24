/*
** get_colors.c for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/lib
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Sat Oct 22 03:52:33 2016 Zouz
** Last update Sat Oct 22 03:53:31 2016 Zouz
*/

#include <lapin.h>

void            get_colors(t_bunny_pixelarray *pix,
			   t_bunny_position *pos,
			   t_color *color)
{
  unsigned int	*pic;

  if (pos->y < pix->clipable.buffer.height &&
                              pos->x > 0 && pos->y > 0 &&
      pos->x < pix->clipable.buffer.width)
    {
      pic = pix->pixels;
      color->full = pic[pos->y * pix->clipable.buffer.width + pos->x];
      return ;
    }
  return ;
}
