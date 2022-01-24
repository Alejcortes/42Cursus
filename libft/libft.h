/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:22:47 by acortes           #+#    #+#             */
/*   Updated: 2022/01/24 17:48:34 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include<string.h>

typedef struct s_list
{
    void    *content;
    struct s_list *next;

} t_list;

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_ialnum(int c);
int	ft_ascii(int c)
int	ft_isprint(int c);

int ft_memeset(void *p, int c, size_t n);
int ft_memmove(void *dest, const void *src, size_t n)

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);

#endif
