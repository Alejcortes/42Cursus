/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes <acortes@student.42barceloacortes> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:25:37 by acortes           #+#    #+#             */
/*   Updated: 2022/01/28 14:36:56 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t    i;
    
    i = 0;
    while (s1[i] == s2[i] && i < n)
        i++;
    if(i == n)
        return (0);
    return ((unsigned char)s1[i] -(unsigned char)s2[i]);
}
