/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes <acortes@student.42barceloacortes> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:19:04 by acortes           #+#    #+#             */
/*   Updated: 2022/01/28 16:48:00 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

int   memcmp(const void *s1, const void *s2, size_t n)
{
    size_t    i;
    unsigned char   *ptr1;
    unsigned char   *ptr2;

    i = 0;
    while(i < n)
    {
        if(ptr1[i] == ptr2[i])
            i++;
        else
            return (ptr1[i] - ptr2[i]);
    }
    return(0);
}
