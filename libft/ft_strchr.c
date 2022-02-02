/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:46:40 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/02 16:50:24 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"libft.h"

char	ft_strchr(const char s, int c)
{
	char	*q;

	while (*q != c)
	{
		if (*q == '/0')
			return (NULL);
		q++;
	}
	return (q);
}
