/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes <acortes@student.42barceloacortes> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:14:51 by acortes           #+#    #+#             */
/*   Updated: 2022/01/16 19:14:51 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    unsigned char *q;
    unsigned char *r;

    *q = (unsigned char *)src;
    *r = (unsigned char *)dest;
    while(n > 0)
    {
        *(r++) = (q++);
        n--;
    }
    return(dest);
}
