/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:37:51 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/02 16:42:21 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

char	ft_strrchr(const char *s, int c)
{
	char	*q;

	*q = (char *)s + ft_strlen(s);
	while (*q != c)
	{
		if (*q == s)
			return (NULL);
		q--;
	}
	return (q);
}
