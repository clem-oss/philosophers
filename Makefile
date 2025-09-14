#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csalaun <csalaun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 08:55:56 by csalaun           #+#    #+#              #
#    Updated: 2025/09/05 08:56:52 by csalaun          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = philosopher

MAIN = main.c
BUILTINS = builtins/builtins_utils.c builtins/builtins_env.c \
			builtins/builtins_exit.c builtins/builtins_cd.c \
			builtins/builtins_export.c builtins/builtins_unset.c \
			builtins/utils_cd.c builtins/buitlins_pwd.c \
			builtins/builtins_echo.c builtins/export_utils.c
CMD_BUILDER = cmd_builder/cmd_builder.c cmd_builder/cmd_utils.c cmd_builder/args_redir.c
CMD_FILLER = cmd_filler/cmd_filler.c cmd_filler/env_converter.c cmd_filler/get_path.c
EXEC = exec/exec.c exec/exec_cmd.c exec/exec_pipeline.c
EXPAND = expand/expand.c expand/expand_utils.c expand/expand_quote_utils.c
INIT = init/init_env.c init/init_obj.c
REDIR = redir/heredoc.c redir/infile.c redir/redir_utils.c
SIGNAL = signal/signal.c
SYNTAX =  syntax/input_syntax.c syntax/token_syntax.c
TOKENIZATION = tokenization/token_operator_bis.c tokenization/token_operator.c \
				tokenization/token_quote.c tokenization/token_utils.c

UTILS = utils/free_var.c utils/utils.c

FILES = $(MAIN) $(BUILTINS) $(CMD_BUILDER) $(CMD_FILLER) $(EXEC) $(EXPAND)\
			$(INIT) $(REDIR) $(SIGNAL) $(SYNTAX) $(TOKENIZATION) $(UTILS)

SRCS = $(addprefix srcs/, $(FILES))
OBJ = $(addprefix build/, $(FILES:.c=.o))
OBJ_DIRS = $(sort $(dir $(OBJ)))
LIBFT = ./libft/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes/
LDFLAGS = -lreadline

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(INCLUDES) $(LDFLAGS) -o $(NAME)
	@echo "\033[92m[philosopher] [✔] $(NAME) successfully compiled\033[0m"

$(LIBFT):
	@$(MAKE) --no-print-directory -C libft
	@echo "\033[96m[philosopher] [📚] Built libft library\033[0m"

build/%.o: srcs/%.c
	@mkdir -p $(OBJ_DIRS)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo "\033[96m[philosopher] [🔧] Compiled $<\033[0m"

clean:
	@$(MAKE) --no-print-directory -C libft clean
	@rm -rf build
	@echo "\033[93m[philosopher] [🧹] Cleaned build directory\033[0m"

fclean:
	@rm -f $(NAME)
	@echo "\033[91m[philosopher] [🔥] Removed binary: $(NAME)\033[0m"
	@$(MAKE) --no-print-directory -C libft fclean
	@rm -rf build
	@echo "\033[91m[philosopher] [🔥] Removed build directory\033[0m"
	@echo "\033[92m[philosopher] [✔] Full clean complete\033[0m"

re: fclean all
	@echo "\033[94m[philosopher] [🔁] Rebuild complete\033[0m"