/*
** intro.c for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/src/intro
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Thu Oct 20 15:38:31 2016 Zouz
** Last update Sun Oct 23 23:52:37 2016 Zouz
*/

#include <lapin.h>
#include <stdlib.h>
#include "libgraph.h"
#include "core_struct/core_struct.h"
#include "path/sprite_path.h"
#include "functions.h"

# define NBR_RAY 3

# define BTWEEN_RAY 3

# define BACK_GROUND_START_X 241
# define BACK_GROUND_START_Y 0

# define BACK_GROUND_SIZE_X 237
# define BACK_GROUND_SIZE_Y 152

# define BACKGRND 4

/* char transp_tab[4][4] = */
/*   { */
/*     {255, 255, 255, 255}, */
/*     {255, 255, 255, 255}, */
/*     {255, 255, 255, 255}, */
/*     {255, 255, 255, 255} */
/*   }; */

# define COL 20

char transp_tab[4][4] =
  {
    {COL, COL, COL, COL},
    {COL, COL, COL, COL},
    {COL, COL, COL, COL},
    {COL, COL, COL, COL}
  };

t_enc	pos_frame_tab[] =
  {
    {{507, 500}, {-1, -1}},
    {{507, 501}, {-1, -1}},
    {{507, 501}, {-1, -1}},
    {{507, 501}, {-1, -1}}
  };

t_enc	pos_intro_tab[] =
  {
    {{1, 0}, {230, 155}},     //frame
    {{1, 163}, {230, 300}},   //frame
    {{1, 327}, {230, 479}},  //frame
    {{1, 491}, {230, 649}},  //frame
    {{242, 0}, {478, 160}},  //background
    {{500, 500}, {-42, -42}}    //position de depart sur la main pixelarray (background)
  };

# define FRAME_FPS 10

void			*intro(t_core_struct *core)
{
  static int		val;
  static int		mod;
  int			i;
  t_draw		draw_info;

  i = 0;
  if (mod % FRAME_FPS == 0)
    {
      val += 1;
      if (val > 3)
	val = 0;
    }
  if (core->sprites->sprite_intro->intro == NULL)
    if ((core->sprites->sprite_intro->intro = bunny_load_pixelarray(SPRITE_ANIMATION_INTRO)) == NULL)
      return (NULL);
  fill_draw(&draw_info, core->sprites->sprite_intro->intro,
	    core->display.main_pix, &pos_intro_tab[BACKGRND], &pos_intro_tab[5], 255);
  draw(&draw_info);
  fill_draw(&draw_info, core->sprites->sprite_intro->intro,
	    core->display.main_pix, &pos_intro_tab[val], &pos_frame_tab[val], transp_tab[i][val]);
  draw(&draw_info);
  ++mod;
  return ((void *)1);
}
