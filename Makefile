##
## Makefile for  in /home/fabian/rendu/PSU/PSU_2015_minishell1
## 
## Made by Zouz
## Login   <fabian@epitech.net>
## 
## Started on  Tue Jun 21 20:18:39 2016 Zouz
## Last update Wed Sep 28 17:45:03 2016 Zouz
##

RCREAT =	mkdir

SRC_DIR =	src/

EXT =		.c

CC =		gcc

RMDIR =		rm -d

RM =		rm -f

LIB_PATH =	lib/

CFLAGS = 	-Llib -Iinclude

CFLAGS +=	-g3 -Wall -Wextra

NAME = 		zelda_the_minish_cap

LAPIN=		-L${HOME}/.froot/lib/ -llapin		\
		-lsfml-audio				\
		-lsfml-graphics				\
		-lsfml-window				\
		-lsfml-system				\
		-lstdc++ -ldl





INIT = 		initialisation/init_core_struct


LOOP =		loop/loop


KBRD =		keyboard/keyboard


OUT_GAME_MENU = out_game_menu/init_menu


SRCS_NAME =	main					\
		$(LOOP)					\
		$(INIT)					\
		$(KBRD)					\
		$(OUT_GAME_MENU)			\






SRCS :=		$(addprefix $(SRC_DIR), $(SRCS_NAME))

SRCS :=		$(addsuffix $(EXT), $(SRCS))

OBJS = 		$(SRCS:.c=.o)

all: 		lib $(NAME)

$(NAME): 	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LAPIN) $(CFLAGS)

lib: 
		$(MAKE) -C $(LIB_PATH)

clean:
		$(RM) $(OBJS)
		$(MAKE) -C $(LIB_PATH) clean

fclean: 	clean
		$(RM) $(NAME)
		$(MAKE) -C $(LIB_PATH) fclean

re: 		fclean all

.PHONY: all clean fclean re lib
