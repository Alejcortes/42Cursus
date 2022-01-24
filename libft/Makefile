# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    make                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acortes <acortes@student.42barceloacortes> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 19:21:33 by acortes           #+#    #+#              #
#    Updated: 2022/01/20 19:21:33 by acortes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS        =   ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset \
                ft_bzero ft_memcpy ft_memmove ft_strlcpy

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