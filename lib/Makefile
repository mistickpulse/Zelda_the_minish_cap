##
## Makefile for  in /home/fabian/rendu/PSU/PSU_2015_minishell1/lib/my
## 
## Made by Zouz
## Login   <fabian@epitech.net>
## 
## Started on  Tue Jun 21 20:14:46 2016 Zouz
## Last update Sat Oct 22 03:55:20 2016 Zouz
##

CP=		cp

RM = 		rm -f

NAME =		libgraph.a

CFLAGS =	-Wall -Wextra -I./include

SRCS =		get_colors_u.c	\
		tekpixel_u.c	\
		tekpixel.c

.H=		libgraph.h

OBJS = 		$(SRCS:.c=.o)

all: 		$(NAME)

$(NAME): 	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)
		$(CP) $(NAME) ../
		$(CP) $(.H) ../include/

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
		$(RM) ../$(NAME)
		$(RM) ../include/$(.H)

re: 		fclean all

.PHONY: 	all clean fclean re
