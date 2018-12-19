# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsharna <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/25 21:22:47 by bsharna           #+#    #+#              #
#    Updated: 2018/12/17 17:22:41 by bsharna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_atoi.c \
	  ft_strlen.c \
	  ft_strcpy.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_isalpha.c \
	  ft_tolower.c \
	  ft_strdup.c \
	  ft_toupper.c \
	  ft_isprint.c \
	  ft_isascii.c \
	  ft_isalnum.c \
	  ft_isdigit.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strstr.c \
	  ft_strlcat.c \
	  ft_strnstr.c \
	  ft_putchar.c \
	  ft_putchar_fd.c \
	  ft_putstr.c \
	  ft_strclr.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_putnbr.c \
	  ft_memalloc.c \
	  ft_putstr_fd.c \
	  ft_memdel.c \
	  ft_strnew.c \
	  ft_strdel.c \
	  ft_strmap.c \
	  ft_putnbr_fd.c \
	  ft_strmapi.c \
	  ft_putendl.c \
	  ft_putendl_fd.c \
	  ft_strjoin.c \
	  ft_strsub.c \
	  ft_itoa.c \
	  ft_strtrim.c \
	  ft_strsplit.c \
	  \
	  ft_lstnew.c \
	  ft_lstdelone.c \
	  ft_lstdel.c \
	  ft_lstadd.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  \
	  ft_swap.c \
	  ft_div_mod.c \
	  ft_sqrt.c \
	  ft_max.c \
	  ft_min.c \
	 
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		gcc -c $(FLAG) $(SRC) -I.
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
