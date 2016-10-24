
/*
** animation.c for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/src/animation
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Thu Oct 20 15:47:01 2016 Zouz
** Last update Fri Oct 21 21:54:19 2016 Zouz
*/

#include <stdlib.h>
#include "core_struct/core_struct.h"
#include "animation.h"
#include "functions.h"

typedef struct	s_choice
{
  int	select;
  void	*(*ptr)();
}		t_choice;

const t_choice	anim_selec[] =
  {
    {SELEC_INTRO, &intro},
    {-1, NULL}
  };

void	*animation(t_core_struct *core)
{
  int	i;

  i = 0;
  while (anim_selec[i].select != -1)
    {
      if (core->animation_index == anim_selec[i].select)
	{
	  anim_selec[i].ptr(core);
	  break;
	}
      ++i;
    }
  return ((void*)1);
}
