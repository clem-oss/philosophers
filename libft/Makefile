#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csalaun <csalaun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 14:51:37 by candre--          #+#    #+#              #
#    Updated: 2025/09/05 09:00:14 by csalaun          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

FILES = ft_isdigit.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
	ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
	ft_strlcpy.c ft_memset.c ft_strchr.c ft_substr.c ft_strlcat.c ft_strlen.c ft_strncmp.c\
	ft_strnstr.c ft_strrchr.c ft_tolower.c ft_isspace.c\
	ft_toupper.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_strtrim.c ft_split.c\
	ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	ft_striteri.c ft_strmapi.c ft_free_tab.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
	ft_lstadd_back_bonus.c ft_printf_fd.c ft_putnbrs_fd.c ft_putstrings_fd.c get_next_line.c

SRC = $(addprefix srcs/, $(FILES))

OBJ = $(addprefix build/,$(FILES:.c=.o))

INCLUDES = libft.h ft_printf_fd.h

CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -c

all : $(NAME)

$(NAME): $(OBJ) Makefile $(INCLUDES)
	@ar -rcs $(NAME) $(OBJ)
	@echo "\033[92m[libft] [✔] $(NAME) successfully compiled\033[0m"

build/%.o: srcs/%.c $(INCLUDES)
	@mkdir -p build
	@$(CC) $(CFLAGS) $< -o $@
	@echo "\033[96m[libft] [🔧] Compiled $<\033[0m"

clean:
	@rm -rf build
	@echo "\033[93m[libft] [🧹] Cleaned build directory\033[0m"

fclean:
	@rm -rf build
	@rm -rf $(NAME)
	@echo "\033[91m[libft] [🔥] Removed binary and build directory\033[0m"
	@echo "\033[92m[libft] [✔] Full clean complete\033[0m"

re: fclean all
	@echo "\033[94m[libft] [🔁] Rebuild complete\033[0m"
