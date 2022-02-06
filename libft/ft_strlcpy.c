/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:51:54 by acortes           #+#    #+#             */
/*   Updated: 2022/02/06 17:11:01 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *src, size_t dsize)
{
	size_t	s;
	size_t	l;

	l = ft_strlen(src);
	s = 0;
	if (!dsize)
		return (l);
	while (src[s] && s < dsize - 1)
	{
		*dst = *src;
		s++;
	}
	return (l);
}
