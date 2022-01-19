/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes <acortes@student.42barceloacortes> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:58:39 by acortes           #+#    #+#             */
/*   Updated: 2022/01/16 16:58:39 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<strings.h>

int ft_bzero(void *s, size_t n)
{
    unsigned char *q;

    *q = (unsigned char*)s;
    while(n > 0)
    {
        *(q++) = 48;
        n--;
    }
    return (s);
}
