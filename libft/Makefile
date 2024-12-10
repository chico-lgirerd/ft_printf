# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 13:41:01 by lgirerd           #+#    #+#              #
#    Updated: 2024/12/10 12:13:33 by lgirerd          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SOURCES = src/ft_atoi.c \
		src/ft_bzero.c \
		src/ft_calloc.c \
		src/ft_isalnum.c \
		src/ft_isalpha.c \
		src/ft_isascii.c \
		src/ft_isdigit.c \
		src/ft_isprint.c \
		src/ft_itoa.c \
		src/ft_memchr.c \
		src/ft_memcmp.c \
		src/ft_memcpy.c \
		src/ft_memmove.c \
		src/ft_memset.c \
		src/ft_putchar_fd.c \
		src/ft_putendl_fd.c \
		src/ft_putnbr_fd.c \
		src/ft_putstr_fd.c \
		src/ft_split.c \
		src/ft_strchr.c \
		src/ft_strdup.c \
		src/ft_striteri.c \
		src/ft_strjoin.c \
		src/ft_strlcat.c \
		src/ft_strlcpy.c \
		src/ft_strlen.c \
		src/ft_strmapi.c \
		src/ft_strncmp.c \
		src/ft_strnstr.c \
		src/ft_strrchr.c \
		src/ft_strtrim.c \
		src/ft_substr.c \
		src/ft_tolower.c \
		src/ft_toupper.c

SOURCES_BONUS = src/ft_lstnew.c \
				src/ft_lstadd_front.c \
				src/ft_lstsisrc/e.c \
				src/ft_lstlast.c \
				src/ft_lstadd_back.c \
				src/ft_lstdelone.c \
				src/ft_lstclear.c \
				src/ft_lstiter.c \
				src/ft_lstmap.c \
				$(SOURCES)

OBJECTS = $(SOURCES:.c=.o)
OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

bonus: $(OBJECTS_BONUS)
	ar rcs $(NAME) $(OBJECTS_BONUS)

%.o: %.c include/libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
