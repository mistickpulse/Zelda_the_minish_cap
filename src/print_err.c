/*
** print_err.c for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/src
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Mon Sep 26 17:12:09 2016 Zouz
** Last update Mon Sep 26 17:12:47 2016 Zouz
*/

#include <stdlib.h>
#include <string.h>

int	print_err(char *str)
{
  write(1, str, strlen(str));
  return (EXIT_FAILURE);
}
