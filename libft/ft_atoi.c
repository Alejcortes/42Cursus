/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:40:00 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/08 16:57:07 by acorrtes         ###   ########.fr       */
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
	while (((s[i] == 't') || (s[i] == '\n') || (s[i] == '\v') || (s[i] == '\f') || (s[i] == '\r') || (s[i] == '\x1b') || (s[i] == ' ')) && (s[i] == '\e'))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			j = -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		resultado *= 10;
		resultado += str[i++] - '0';
	}
	resultado *= j;
	return (resultado);
}
