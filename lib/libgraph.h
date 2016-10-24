/*
** libgraph.h for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/lib
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Sat Oct 22 03:48:44 2016 Zouz
** Last update Sat Oct 22 03:57:05 2016 Zouz
*/

#ifndef LIBGRAPH_H_
# define LIBGRAPH_H_

#include <lapin.h>

unsigned int 	get_colors_u(t_bunny_pixelarray *pix, t_bunny_position *pos);
void		tekpixel_u(t_bunny_pixelarray *pix, t_bunny_position *pos, unsigned int color);
void		get_colors(t_bunny_pixelarray *pix, t_bunny_position *pos, t_color *color);
void		tekpixel(t_bunny_pixelarray *pix, t_bunny_position *pos, t_color *color);

#endif /* !LIBGRAPH_H_ */
