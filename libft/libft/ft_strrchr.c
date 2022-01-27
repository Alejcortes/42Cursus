/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes <acortes@student.42barceloacortes> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:53:46 by acortes           #+#    #+#             */
/*   Updated: 2022/01/27 12:25:08 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

char   ft_strrchr(const char *s, int c)
{
    char *q;

    *q = (char *) s + ft_strlen(s);

    while(*q != c)
        {
            if(*q == s)
                return(NULL);
        q--;
        }
    return(q);
}
