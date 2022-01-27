/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes <acortes@student.42barceloacortes> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:23:06 by acortes           #+#    #+#             */
/*   Updated: 2022/01/27 10:51:26 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	i = 0;

	while (ft_strlen(src) != "/0" && (ft_strlen(src) + i) < dstsize - 1)
	{
		dst[i] = src[ft_strlen(src) + i ];
		i++;
	}
	if ((ft_strlen(src) + i) >= 0)
		dstsize = (ft_strlen(src) + i);
	return (ft_strlen(src) + ft_strlen(dst));
}
