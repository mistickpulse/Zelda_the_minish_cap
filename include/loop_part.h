/*
** loo_part.h for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/include
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Thu Oct 20 15:29:39 2016 Zouz
** Last update Fri Oct 21 21:34:28 2016 Zouz
*/

#ifndef LOOP_PART_H_
# define LOOP_PART_H_

# define OUT_GAME_MENU_INDEX 1
# define ANIMATION_INDEX 2

typedef struct	loop_part
{
  int		index;
  void		*(*act)();
}		t_loop_part;

#endif /* !LOOP_PART_H_ */
