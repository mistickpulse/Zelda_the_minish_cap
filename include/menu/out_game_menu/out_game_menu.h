/*
** out_game_menu.h for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/include/menu/out_game_menu
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Mon Sep 19 07:05:39 2016 Zouz
** Last update Mon Sep 19 09:39:06 2016 Zouz
*/

# ifndef OUT_GAME_MENU_H_
# define OUT_GAME_MENU_H_

#include <stdbool.h>

# define SAVE_PATH "save/"
# define MAX_SAVE_NUMBER 3

typedef struct		s_out_game_save_menu
{
  unsigned int		player_max_health;
  unsigned int		player_current_health;
  unsigned int		player_sword_state;
  bool			element_tab[4];
  unsigned int		current_state_player_animation;
}			t_out_game_save_menu;

typedef struct		s_out_game_menu
{
  unsigned int		cursor_place;
  t_out_game_save_menu	saves[MAX_SAVE_NUMBER];
}			t_out_game_menu;

#endif /* OUT_GAME_MENU_H_ */
