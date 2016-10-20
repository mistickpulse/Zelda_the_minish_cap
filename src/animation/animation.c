/*
** animation.c for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/src/animation
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Thu Oct 20 15:47:01 2016 Zouz
** Last update Thu Oct 20 15:52:10 2016 Zouz
*/

#include "animation.h"

struct s_choice
{
  int	select;
  void	*(*ptr)();
};

struct s_choise anim_selec[] =
  {
    {SELEC_INTRO, &intro},
    {-1, NULL}
  };

void	*animation(t_core *core)
{
  //core->selec animation
}
