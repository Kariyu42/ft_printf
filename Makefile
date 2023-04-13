# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 12:15:28 by kquetat-          #+#    #+#              #
#    Updated: 2023/04/13 10:53:57 by kquetat-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### NAME OF LIBRARY & ADDITIONALS ###
NAME		=	libftprintf.a
LIBFT		=	libft/
HEADER_F	=	includes/
SRCS_PATH	=	srcs/

### C FILES ###
SRCS	=	${addprefix ${SRCS_PATH}, ft_get_precision.c ft_get_width.c \
			print_char.c print_str.c print_int.c \
			print_addr.c add_numflags.c int_precision.c \
			print_unsigned.c print_hexa.c hexa_padd.c} \
			ft_printf.c

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
	make bonus -C $(LIBFT)
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

bonus:	$(NAME)

clean:
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)/libft.a
	
re:	fclean all

.PHONY: all clean fclean re bonus