/*
** fill_draw.c for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/src/animation
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Fri Oct 21 17:23:35 2016 Zouz
** Last update Sun Oct 23 23:48:38 2016 Zouz
*/

#include <lapin.h>
#include "core_struct/core_struct.h"
#include "libgraph.h"

void                    fill_draw(t_draw *draw, t_bunny_pixelarray *src, t_bunny_pixelarray *dest, t_enc *enc, t_enc *start_pos, char transparency)
{
  t_bunny_position	tmp;

  tmp.x = 1;
  tmp.y = 1;
  draw->src = src;
  draw->dest = dest;
  draw->dest_st.x = start_pos->st.x;
  draw->dest_st.y = start_pos->st.y;
  draw->src_st.x = enc->st.x;
  draw->src_st.y = enc->st.y;
  draw->src_ed.y = enc->ed.y;
  draw->src_ed.x = enc->ed.x;
  draw->ignore[0] = get_colors_u(src, &tmp);
  draw->ignore[1] = get_colors_u(src, &tmp);
  draw->ignore[2] = get_colors_u(src, &tmp);
  draw->ignore[3] = get_colors_u(src, &tmp);
  draw->transparency = transparency;
}
