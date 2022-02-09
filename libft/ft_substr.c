/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:40:37 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/09 20:18:42 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;
	char			*c;

	c = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (!(c))
		return (NULL);
	i = start;
	j = 0;
	if (start < slen)
	{
		while (i < start + len && s[i] != '\0')
		{
			c[j] = s[i];
			i++;
			j++;
		}
	}
	c[j] = '\0';
	return (c);
}
