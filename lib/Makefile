##
## Makefile for  in /home/fabian/rendu/PSU/PSU_2015_minishell1/lib/my
## 
## Made by Zouz
## Login   <fabian@epitech.net>
## 
## Started on  Tue Jun 21 20:14:46 2016 Zouz
## Last update Mon Sep 19 09:35:42 2016 Zouz
##

RM = 		rm -f

NAME =		libmy.a

CFLAGS =	-Wall -Wextra -I./include

SRCS =

OBJS = 		$(SRCS:.c=.o)

all: 		$(NAME)

$(NAME): 	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)
		cp $(NAME) ../

clean:
		$(RM) $(SRCO)

fclean: clean
		$(RM) $(NAME)
		$(RM) ../$(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re
