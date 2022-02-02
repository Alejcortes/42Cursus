/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes <acortes@student.42barceloacortes> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:37:54 by acortes           #+#    #+#             */
/*   Updated: 2022/01/28 15:18:35 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

void    *memchr(const void *s, int c, size_t n)
{
    int    i;
    unsigned char *str;

    *str = (const void *)s;
    i = 0;
    while (n--)
    {
        if(str = (unsigned char)c)
            return (str + i);
        i++;
    }
    return (NULL);
}
