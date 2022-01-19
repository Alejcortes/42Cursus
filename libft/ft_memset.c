/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes <acortes@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:07:52 by acortes           #+#    #+#             */
/*   Updated: 2022/01/15 14:07:55 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>

int ft_memeset(void *p, int c, size_t n)
{
    unsigned char *q;

    q = (unsigned char *)p;
    while(n--)
    {
        *(q++) = (unsigned char)c;
    }
    return(p);
}
