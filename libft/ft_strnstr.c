/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:18:05 by acortes           #+#    #+#             */
/*   Updated: 2022/02/08 15:36:02 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;

	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < len && haystack[i + j] == needle[j])
			{
				j++;
				if (!needle[j])
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}
