# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 17:05:16 by lgabet            #+#    #+#              #
#    Updated: 2022/11/15 10:01:56 by lgabet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_isascii.c\
ft_memset.c\
ft_strnstr.c\
ft_isdigit.c\
ft_strchr.c\
ft_strrchr.c\
ft_atoi.c\
ft_isprint.c\
ft_strdup.c\
ft_tolower.c\
ft_bzero.c\
ft_memchr.c\
ft_strlcat.c\
ft_toupper.c\
ft_calloc.c\
ft_memcmp.c\
ft_strlcpy.c\
ft_isalnum.c\
ft_memcpy.c\
ft_strlen.c\
ft_isalpha.c\
ft_memmove.c\
ft_strncmp.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_split.c

HEADERS = libft.h
OBJS= ${SRCS:.c=.o}

all: $(NAME)

%.o:%.c $(HEADERS) Makefile
		$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS) $(HEADERS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all