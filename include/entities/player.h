/*
** player.h for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/include
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Mon Aug 22 20:18:58 2016 Zouz
** Last update Sat Oct  1 20:30:03 2016 Zouz
*/

#ifndef PLAYER_H_
# define PLAYER_H_

#include "lapin.h"

typedef struct		s_player_stat
{
  unsigned int		current_rubys;
  unsigned int		max_rubys;
  unsigned int	       	max_hp;
  unsigned int	       	current_hp;
  unsigned int		moovement_speed;
  unsigned int		damage;
  unsigned int		attack_speed;
  unsigned int		direction;
  unsigned int		current_object_a;
  unsigned int		current_object_b;
  t_bunny_position	pos;
}			t_player_stat;

typedef struct		s_player
{
  char			*name;
  t_inventory		*inventory;
  t_player_stat		stat;
  //void			*spell();//fonction executtant le sors de l'objet courant;
}			t_player;

#endif /* !PLAYER_H_ */
