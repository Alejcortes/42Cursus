# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 19:21:33 by acortes           #+#    #+#              #
#    Updated: 2022/02/03 16:43:23 by acorrtes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS        =   ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
                ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
                ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
                ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c

OBJS        = ${SRCS: .C=.O}

NAME        = libft.a

CC          = cc

RM          = rm -f

CFLAGS      = -Wall -Wextra -Werror -g

.c.o:
        ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:        ${NAME}

${NAME}:    ${OBJS}
            ${CC} -o hello ${OBJS}

clean:
        ${RM} ${OBJS}

fclaen:     clean
            ${RM} ${NAME}

re:         fclaen all


.PHONY: all, clean, fclaen, re
