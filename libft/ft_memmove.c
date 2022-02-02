/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:13:30 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/02 16:24:53 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

void	ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p;
	unsigned char	*q;
	unsigned char	*r;

	*p = (unsigned char *)src;
	*q = (unsigned char *)dst;
	while (len-- > 0)
	{
		*(r++) = *(p++);
		*(q++) = *(r++);
	}
}
