##
## Makefile for  in /home/fabian/rendu/PSU/PSU_2015_minishell1
## 
## Made by Zouz
## Login   <fabian@epitech.net>
## 
## Started on  Tue Jun 21 20:18:39 2016 Zouz
## Last update Sat Oct 22 04:01:36 2016 Zouz
##

RCREAT =	mkdir

SRC_DIR =	src/

EXT =		.c

CC =		gcc

RMDIR =		rm -d

RM =		rm -f

LIB_PATH =	lib/

CFLAGS = 	-L./lib -lgraph -Iinclude

CFLAGS +=	-g3 -Wall -Wextra

NAME = 		zelda_the_minish_cap

LAPIN=		-L${HOME}/.froot/lib/ -llapin		\
		-lsfml-audio				\
		-lsfml-graphics				\
		-lsfml-window				\
		-lsfml-system				\
		-lstdc++ -ldl

INIT = 		initialisation/init_core_struct


LOOP =		loop/loop			\

ANIMATION=	animation/intro/intro		\
		animation/fill_draw		\
		animation/animation

SRC=		draw				\

KBRD =		keyboard/keyboard		\


OUT_GAME_MENU = out_game_menu/init_menu		\


SRCS_NAME =	main					\
		$(LOOP)					\
		$(INIT)					\
		$(KBRD)					\
		$(OUT_GAME_MENU)			\
		$(ANIMATION)				\
		$(SRC)






SRCS :=		$(addprefix $(SRC_DIR), $(SRCS_NAME))

SRCS :=		$(addsuffix $(EXT), $(SRCS))

OBJS = 		$(SRCS:.c=.o)

all: 		lib $(NAME)

$(NAME): 	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LDFLAGS) $(LAPIN) $(CFLAGS)

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
