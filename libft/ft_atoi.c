/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:40:00 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/09 20:35:34 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	char	*s;
	int		j;
	long	resultado;

	resultado = 0;
	j = 1;
	s = (char *)str;
	i = 0;
	while (((s[i] == '\t') || (s[i] == '\n') || (s[i] == '\v') || (s[i] == '\f')
				|| (s[i] == '\r') || (s[i] == '\x1b') || (s[i] == ' ')))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i++] == '-')
			j = -1;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultado = resultado * 10 + (str[i] - '0');
		i++;
	}
	resultado *= j;
	return (resultado);
}
