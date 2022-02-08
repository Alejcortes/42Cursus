/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:51:54 by acortes           #+#    #+#             */
/*   Updated: 2022/02/08 11:43:10 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (dsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] != '\0' && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dsize)
		dst[i] = '\0';
	while (src[i] != '\0')
			i++;
	return (i);
}
