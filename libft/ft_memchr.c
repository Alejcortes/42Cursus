/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:08:34 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/08 13:14:43 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sc;
	unsigned int	i;

	sc = (unsigned char *)s;
	i = 0;
	while (i < n && sc[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)&sc[i]);
}
