/*
** mob.h for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/include/entities
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Tue Aug 30 19:16:09 2016 Zouz
** Last update Mon Oct 10 14:58:41 2016 Zouz
*/

#ifndef MOB_H_
# define MOB_H_

typedef struct		s_game_mob_spell
{
  char			*type;
  t_bunny_position	pos;
  unsigned int		directon;
  unsigned int		damage;
}			t_game_mob_spell;

typedef struct		s_game_mob__stat
{
  unsigned int		hp;
  unsigned int		max_hp;
  unsigned int		damage;
  unsigned int		moovement_speed;
  unsigned int		wait;
  unsigned int		direction;
}			t_game_mob__stat;

typedef struct		s_game_mob
{
  char			*mob_name;
  t_bunny_position	pos;
  t_game_mob_stat	stat;
  t_game_mob_spell     	*current_spell;
  int			(*spell)(t_bunny_position *pos, char *mob_type, unsigned int diretion);
}			t_game_mob;

#endif /* !MOB_H_ */
