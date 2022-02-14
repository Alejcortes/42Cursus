# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/06 15:48:55 by acorrtes          #+#    #+#              #
#    Updated: 2022/02/14 21:20:39 by acorrtes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME        = libft.a

CFLAGS      = -Wall -Wextra -Werror

SRCS        =   ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
                ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
                ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
                ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
				ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c\
				ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS       =   ft_lstnew.c ft_lstadd_front.c ft_lstsize.c

OBJS        = ${SRCS:.c=.o}

OBJS_B		= ${BONUS:.c=.o}

CC          = cc

RM          = rm -f

${NAME}:    ${OBJS}
	ar rc ${NAME} ${OBJS}

all:        ${NAME}

bonus: ${OBJS} ${OBJS_B}
	ar rc ${NAME} ${OBJS} ${OBJS_B}

clean:
	${RM} ${OBJS} ${OBJS_B}

fclean:     clean
	${RM} ${NAME}

re:         fclaen all


.PHONY: all clean fclaen re
