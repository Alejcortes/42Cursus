/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:49:45 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/02 15:55:24 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

void	ft_memset(void *b, int c, size_t len)
{
	unsigned char	*q;

	q = (unsigned char *)b;
	while (len--)
		*(q++) = (unsigned char)c;
	return (b);
}
