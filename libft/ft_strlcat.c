/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:23:06 by acortes           #+#    #+#             */
/*   Updated: 2022/02/06 17:17:14 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	while (src_len != '\0' && (src_len + i) < dstsize - 1)
	{
		dst[i] = src[src_len + i];
		i++;
	}
	if ((src_len + i) >= 0)
		dstsize = (src_len + i);
	return (src_len + ft_strlen(dst));
}
