/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:46:40 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/06 17:34:13 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*q;

	q = (char *)s;
	while (*q != c)
	{
		if (*q == '\0')
			return (NULL);
		q++;
	}
	return (q);
}
