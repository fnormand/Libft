#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/26 17:57:03 by fnormand          #+#    #+#              #
#    Updated: 2014/01/26 18:01:17 by fnormand         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=		libft.a

CFLAGS		=		-Wall -Wextra -Werror

LFLAGS		=		ar rc

CC			=		gcc

RM			=		rm -f

SRCS		=		ft_memset.c	\
					ft_bzero.c	\
					ft_memcpy.c	\
					ft_memccpy.c	\
					ft_memmove.c	\
					ft_memchr.c	\
					ft_memcmp.c	\
					ft_strlen.c	\
					ft_strdup.c	\
					ft_strcpy.c	\
					ft_strncpy.c	\
					ft_strcat.c	\
					ft_strncat.c	\
					ft_strlcat.c	\
					ft_strchr.c	\
					ft_strrchr.c	\
					ft_strstr.c	\
					ft_strnstr.c	\
					ft_strcmp.c	\
					ft_strncmp.c	\
					ft_atoi.c	\
					ft_isdigit.c	\
					ft_isprint.c	\
					ft_isascii.c	\
					ft_isalnum.c	\
					ft_isalpha.c	\
					ft_tolower.c	\
					ft_toupper.c	\
					ft_memalloc.c	\
					ft_memdel.c	\
					ft_strnew.c	\
					ft_strdel.c	\
					ft_strclr.c	\
					ft_striter.c	\
					ft_striteri.c	\
					ft_strmap.c	\
					ft_strmapi.c	\
					ft_strequ.c	\
					ft_strnequ.c	\
					ft_strsub.c	\
					ft_strjoin.c	\
					ft_strtrim.c	\
					ft_strsplit.c	\
					ft_itoa.c	\
					ft_putchar.c	\
					ft_putstr.c	\
					ft_putendl.c	\
					ft_putnbr.c	\
					ft_putchar_fd.c	\
				 	ft_putstr_fd.c	\
					ft_putendl_fd.c \
					ft_putnbr_fd.c

OBJS		=		$(SRCS:.c=.o)

all			:		$(NAME)

$(NAME)		:		$(OBJS)
					$(LFLAGS) $(NAME) $(OBJS)

%.o			:		%.c
					$(CC) $(CFLAGS) -c $<

.phony		:		clean re fclean

fclean		:		clean
					$(RM) $(NAME)

clean		:
					$(RM) $(OBJS)

re			:		fclean all

x			:		clean
					$(RM) *~

test    	:
					$(CC) $(CFLAGS) mytest/main.c -o testperso -I. -L. -lft

w			:
					$(CC) main.c -o test -I. -L. -lft
