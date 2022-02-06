/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:04:44 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/06 16:39:17 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

void	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*q;
	unsigned char	*r;

	q = (unsigned char *)src;
	r = (unsigned char *)dst;
	while (n-- > 0)
		*(r++) = *(q++);
	return (*dst);
}
