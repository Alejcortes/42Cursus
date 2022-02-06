/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:13:30 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/06 16:50:24 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

void	ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p;
	char	*q;

	p = (char *)dst;
	q = (char *)src;
	if (p > q)
	{
		while (len--)
			p[len] = q[len];
	}
	else if (p < q)
		ft_memcpy(p, q, len);
	return (*dst);
}
