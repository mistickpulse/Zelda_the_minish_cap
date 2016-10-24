/*
** draw.c for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/src
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Fri Oct 21 16:10:42 2016 Zouz
** Last update Mon Oct 24 02:08:10 2016 Zouz
*/

#include <lapin.h>
#include "core_struct/core_struct.h"
#include "core_struct/draw.h"

# define SRC draw_info->src
# define DEST draw_info->dest

static unsigned int		get_colors_loc(t_bunny_pixelarray *pix,
					       t_bunny_position *pos)
{
  unsigned int			*pic;

  if (pos->y < pix->clipable.buffer.height &&
            pos->x > 0 && pos->y > 0 &&
      pos->x < pix->clipable.buffer.width)
    {
      pic = pix->pixels;
      return (pic[pos->y * pix->clipable.buffer.width + pos->x]);
    }
  return (0);
}

static void            	tekpixel_loc(t_bunny_pixelarray *pix,
				    t_bunny_position *pos,
				    unsigned int color)
{
  unsigned      	*pixel;
  int           	i;

  if (((pos[0].x < 0 || pos[0].y < 0))||
      (pos->x > pix->clipable.buffer.width ||
       pos->y > pix->clipable.buffer.height))
    return;
  i = pix->clipable.buffer.width * pos->y + pos->x;
  pixel = (unsigned *)pix->pixels;
  if (255 == color >> 24)
    pixel[i] = color; //tmp need to set up the alpha;
  pixel[i] = color;
  /* else if ((color >> 24) != 0) */
  /*   pixel[i] += ((color) / (color >> 24)); */
}

int			check_for_ignore(unsigned int current_color, t_draw *info)
{
  int	i;

  i = 0;
  if (info == NULL || info->ignore == NULL)
    return (0);
  while (i < 4)
    {
      if (current_color == info->ignore[i])
	return (-1);
      ++i;
    }
  return (0);
}

unsigned int   		apply_transp(unsigned int color, char alpha)
{
  t_color		tmp;

  tmp.full = ALPHA(alpha, color);
  return (tmp.full);
}

void			draw(t_draw *draw_info)
{
  unsigned int		tmp;
  t_bunny_position	dest_pos;
  t_bunny_position	local;

  local.y = draw_info->src_st.y;
  dest_pos.y = draw_info->dest_st.y;
  while (local.y != draw_info->src_ed.y)
    {
      dest_pos.x = draw_info->dest_st.x;
      local.x = draw_info->src_st.x;
      while (local.x != draw_info->src_ed.x)
	{
	  tmp = get_colors_loc(SRC, &local);
	  if (check_for_ignore(tmp, draw_info) == 0)
	    tekpixel_loc(DEST, &dest_pos, apply_transp(tmp, draw_info->transparency));
	  dest_pos.x += 1;
	  local.x += 1;
	}
      local.y += 1;
      dest_pos.y += 1;
    }
}
