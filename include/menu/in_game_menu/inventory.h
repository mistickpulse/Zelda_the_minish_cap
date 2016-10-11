/*
** inventory.h for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/include
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Mon Aug 22 22:11:45 2016 Zouz
** Last update Mon Sep 19 06:51:28 2016 Zouz
*/

#ifndef INVENTORY_H_
# define INVENTORY_H_

#include <sys/types.h>
#include <stdbool.h>

/*
** rajouter toutes les textures et les sous structures correspsondant a chaque grosse structures
** afin de mettre les textures directement a l'interieur (plus simple pour toi zouz)
*/

typedef struct			s_fragment_bag
{
  unsigned int			size_max_bag_fragment;
  //definir plus en details les fragments du bonheur;
}

typedef struct			s_inventory_quest_items;
{
  bool				ring;
  bool				flipper;
  bool				wristband;
}				t_inventory_quest_items;

typedef struct			s_inventory_quest_element
{
  bool				fire;
  bool				water;
  bool				earth;
  bool				air;
}				t_inventory_quest_element;

typedef struct			s_inventory_quest
{
  int				*fencing_scroll;
  unsigned int			shell;
  unsigned int			hearth_receptacle;
  t_inventory_quest_element	*element;
  t_inventory_quest_items	*items;
}				t_inventory_quest;

typedef struct			s_inventory_bottle
{
  int				*bottle;
  int				nbr_max_bottle;
}				t_inventory_bottle;

typedef struct			s_inventory_weapon
{
  int				**weapon;
}				t_inventory_weapon;

typedef struct			s_inventory
{
  t_inventory_weapon		*weapon;
  t_inventory_bottle		*bottle;
  t_inventory_quest		*quest;
  //ptr sur fonction permettant la sauvegarde;
}				t_inventory;

#endif /* INVENTORY_H_ */
