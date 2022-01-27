/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:51:54 by acortes           #+#    #+#             */
/*   Updated: 2022/01/24 16:56:53 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	s;

	s = 0;
	if (!dstsize)
		return (ft_srtlen(src));
	while (src[s] && s < dstsize - 1)
	{
		dst = src;
		s++;
	}
	return (ft_strlen(src));
}
