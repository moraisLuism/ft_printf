# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmorais- <lmorais-@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 18:03:34 by lmorais-          #+#    #+#              #
#    Updated: 2023/10/26 19:49:03 by lmorais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

INCS_DIR = ./includes
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

BUILD_DIR = build
SRC_DIR = ./srcs
SRCS = ft_format.c 	\
	ft_print_c.c	\
	ft_print_di.c	\
	ft_print_x.c	\
	ft_print_p.c	\
	ft_print_s.c 	\
	ft_print_u.c	\
	ft_printf.c				

OBJS = $(SRCS:%.c=$(BUILD_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@ar rc $(NAME) $(OBJS)	
	
$(OBJS): $(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I $(INCS_DIR) -I $(LIBFT_DIR) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)

clean:
	make clean -C $(LIBFT_DIR)
	$(RM) -r $(BUILD_DIR) 
	
fclean: clean
	make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
	
