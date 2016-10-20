/*
** loo_part.h for  in /home/zouz/rendu/jeux/Zelda_the_minish_cap/include
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Thu Oct 20 15:29:39 2016 Zouz
** Last update Thu Oct 20 15:50:26 2016 Zouz
*/

# define OUT_GAME_MENU_INDEX 1
# define ANIMATION_INDEX 2

typedef struct	loop_part
{
  int		index;
  void		*(act)();
}		t_loop_part;
