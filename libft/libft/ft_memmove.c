/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes <acortes@student.42barceloacortes> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 07:27:36 by acortes           #+#    #+#             */
/*   Updated: 2022/01/17 07:27:36 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>

int ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *p;
    unsigned char *q;
    unsigned char *s;

    *p = (unsigned char *)src;
    *q = (unsigned char *)dest;

    while(n > 0)
    {
        *(s++) = *(p++);
        *(q++) = *(s++);
        n--;
    }
}
