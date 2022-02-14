/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:26:51 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/13 16:59:20 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_array(char *c, unsigned int num, long int len)
{
	while (num > 0)
	{
		c[len--] = 48 + (num % 10);
		num = num / 10;
	}
	return (c);
}

static int	ft_lenint(int n)
{
	int	len2;

	len2 = 0;
	if (n <= 0)
		len2 = 1;
	while (n != 0)
	{
		len2++;
		n = n / 10;
	}
	return (len2);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	long int		len;
	char			*c;

	len = ft_lenint(n);
	c = (char *)malloc(sizeof(char) * (len + 1));
	if (!c)
		return (NULL);
	c[len--] = '\0';
	if (n == 0)
		c[0] = '0';
	if (n < 0)
	{
		num = n * -1;
		c[0] = '-';
	}
	else
		num = n;
	c = ft_array(c, num, len);
	return (c);
}
