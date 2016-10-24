/*
** main.c for  in /home/zouz/rendu/jeux/zelda_the_minish_cap/src
**
** Made by Zouz
** Login   <zouz@epitech.net>
**
** Started on  Mon Sep 19 08:09:37 2016 Zouz
** Last update Sat Oct 22 18:29:25 2016 Zouz
*/

#include <lapin.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "core_struct/core_struct.h"
#include "functions.h"
#include "error/error_msg.h"
#include "color.h"

/* int		check_args(int ac, char **av) */
/* { */
/*   if (ac == 3) */
/*   return (EXIT_SUCCESS); */
/* } */

int		main(__attribute__((unused))int ac, __attribute__((unused))char **av)
{
  t_core_struct	*core;

  if ((core = init_core_struct(0, 0)) == NULL)
    {
      //      process_error(MALLOC);
      return (-1);
    }
  bunny_set_loop_main_function(&main_loop);
  bunny_set_key_response(&keyboard);
  bunny_loop(core->display.main_window, 60, core);
}
