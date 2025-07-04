# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/14 11:19:02 by MP9               #+#    #+#              #
#    Updated: 2025/07/04 13:21:24 by MP9              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	CC
CFLAGS	= -Wall -Wextra -Werror

SRCFILES = ft_atoi ft_bzero ft_isalnum ft_isalpha \
	ft_isascii ft_isdigit ft_isprint ft_itoa ft_memchr \
	ft_memcmp ft_memset ft_putchar_fd ft_putendl_fd \
	ft_itoa ft_putnbr_fd ft_putnbr ft_putstr_fd \
	ft_strcat ft_strchr ft_strcmp ft_strcpy ft_strnstr \
	ft_strncmp ft_strncpy ft_strstr ft_tolower ft_toupper \
	ft_strlen ft_strdup


SRCS 	= $(SRCFILES:=.c)
OBJS	= $(SRCFILES:=.o)

NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c	
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -rf $(OBJS)
	@echo "object files cleaned."

fclean: clean
	rm -f $(NAME)
	@echo "library and object files cleaned."

re: fclean all

.PHONY: all clean fclean re bonus