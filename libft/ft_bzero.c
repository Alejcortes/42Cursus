/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:57:17 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/06 16:36:29 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*q;

	q = (unsigned char *)s;
	while (n > 0)
	{
		*(q++) = 48;
		n--;
	}
	return (*s);
}
