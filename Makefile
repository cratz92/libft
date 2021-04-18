# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 09:05:44 by cbrito-l          #+#    #+#              #
#    Updated: 2021/04/14 09:05:44 by cbrito-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

PATH_BUILD := build

SRCS = ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memccpy.c		\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c		\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_strnstr.c		\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c 	\
		ft_strtrim.c		\
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstclear.c		\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstmap.c

OBJS := $(SRCS:%.c=$(PATH_BUILD)/%.o)
DEPS := $(OBJS:.o=.d)
INC_DIRS := $(SRCS) $(OBJS)

CC := gcc

N_FLAGS := -Wall -Wextra -Werror
I_FLAGS := $(addprefix -I, $(INC_DIRS))
M_FLAGS := -MMD -MP
D_FLAGS := -g
CC_FLAGS := $(N_FLAGS) $(I_FLAGS) $(M_FLAGS) $(D_FLAGS)

all: $(NAME)

$(NAME): $(OBJS)
	@ ar rcs $@ $(OBJS)

bonus: all

$(PATH_BUILD)/%.o: %.c
	@ mkdir -p $(dir $@)
	@ $(CC) $(CC_FLAGS) -c $< -o $@

clean:
	@ rm -rf $(PATH_BUILD)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

so:
	@ $(CC) -fPIC -c $(CC_FLAGS) $(SRCS)
	@ gcc -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re

-include $(DEPS)
