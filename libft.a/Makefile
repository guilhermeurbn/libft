# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 11:59:07 by guisanto          #+#    #+#              #
#    Updated: 2024/10/29 17:50:28 by guilhermeur      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
SRCS_DIR = srcs
INCLDUDES_DIR = includes

SRCS = $(SRCS_DIR)\ft_*.c

CFLAGS = $(CC) -Wall -Werror -Wextra -g -I $(INCLUDES_DIR)

OBJS = $(SRCS:.c = .o)

all : $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $^

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
