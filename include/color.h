/*
** color.h for  in /home/fabian/rendu/rush/sudoki-bi/include
**
** Made by Zouz
** Login   <fabian@epitech.net>
**
** Started on  Sun Jun 12 00:20:39 2016 Zouz
** Last update Mon Sep 26 17:37:09 2016 Zouz
*/

#ifndef COLOR_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>

# define M_REVERSE "7"
# define M_SHINE "5"
# define M_HIGH "1"
# define M_BLACK "30"
# define M_RED "31"
# define M_GREEN "32"
# define M_YELLOW "33"
# define M_BLUE "34"
# define M_MAGENTA "35"
# define M_CYAN "36"
# define M_WHITE "37"
# define M_RESET "0"

# define SEQ "\033["
# define END_SEQ "m"

# define color(str) printf("%s%sm", SEQ, str); fflush(stdout)

/* write(1, str, strlen(str)); */
/* write(1, END_SEQ, 1) */

#endif /* !COLOR_H_ */
