# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmorais- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 17:34:42 by lmorais-          #+#    #+#              #
#    Updated: 2023/10/26 19:42:27 by lmorais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC		= gcc
CFLAGS 	= -Wall -Wextra -Werror
LIB = ar -rcs
RM = rm -f
BUILD_DIR = ./build
SRC_DIRS = ./
INCS_DIR = ./

SRCS = ft_atoi.c		\
	ft_bzero.c			\
	ft_calloc.c			\
	ft_isalnum.c		\
	ft_isalpha.c		\
	ft_isascii.c		\
	ft_isdigit.c		\
	ft_isprint.c		\
	ft_itoa.c			\
	ft_memchr.c			\
	ft_memcmp.c			\
	ft_memcpy.c			\
	ft_memmove.c		\
	ft_memset.c   		\
	ft_putchar_fd.c		\
	ft_putendl_fd.c		\
	ft_putnbr_fd.c		\
	ft_putstr_fd.c		\
	ft_split.c			\
	ft_strchr.c			\
	ft_strdup.c			\
	ft_striteri.c 		\
	ft_strjoin.c		\
	ft_strlcat.c		\
	ft_strlcpy.c		\
	ft_strlen.c			\
	ft_strmapi.c		\
	ft_strncmp.c		\
	ft_strnstr.c		\
	ft_strrchr.c		\
	ft_strtrim.c		\
	ft_substr.c			\
	ft_tolower.c		\
	ft_toupper.c		\
	ft_lstadd_back.c	\
	ft_lstadd_front.c	\
	ft_lstclear.c		\
	ft_lstdelone.c		\
	ft_lstiter.c		\
	ft_lstlast.c		\
	ft_lstmap.c 		\
	ft_lstnew.c			\
	ft_lstsize.c	
	
OBJS = $(SRCS:%=$(BUILD_DIR)/%.o)

all: $(BUILD_DIR)/$(NAME)

$(BUILD_DIR)/$(NAME): $(OBJS) $(INCS)
	ar -rcs $(NAME) $(OBJS)

$(BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INCS_DIR) -c $< -o $@

clean:
	$(RM) -r $(BUILD_DIR)
			
fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re










