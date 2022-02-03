/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:08:34 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/03 16:36:16 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

void	ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str ;

	*str = (const void *)s;
	i = 0;
	while (n--)
	{
		if (*str = (unsigned char)c)
			return (str + 1);
			i++;
	}
	return (NULL);
}
