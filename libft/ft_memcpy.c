/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:04:44 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/09 20:27:46 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*q;
	unsigned char	*r;

	q = (unsigned char *)src;
	r = (unsigned char *)dst;
	while (n > 0)
	{
		*(r++) = *(q++);
	n--;
	}
	return (dst);
}
