# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 12:15:28 by kquetat-          #+#    #+#              #
#    Updated: 2023/02/13 09:49:29 by kquetat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### NAME OF LIBRARY & ADDITIONALS ###
NAME		=	libftprintf.a
LIBFT		=	libft/
HEADER_F	=	includes/

### C FILES ###
SRCS	=	ft_printf.c ft_get_precision.c ft_get_width.c \
			srcs/print_char.c srcs/print_str.c srcs/print_int.c \
			srcs/print_addr.c srcs/add_numflags.c
			
OBJS	=	$(SRCS:.c=.o)
### COMPILATION W/ FLAGS & OTHERS ###
CC		= clang
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

%.o:%.c	$(HEADER_F)
	$(CC) $(CFLAGS) -c -I ./$(HEADER_F) $< -o $(<:.c=.o)

### RULES ###
all:		$(NAME)

$(NAME):	$(OBJS)
	make bonus $(LIBFT)
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

bonus:	$(NAME)

clean:
	$(RM) $(OBJS)
	make clean $(LIBFT)

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)/libft.a
	
re:	fclean all

.PHONY: all clean fclean re bonus