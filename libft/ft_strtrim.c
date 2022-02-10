/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:19:10 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/10 14:13:21 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t sizei;
	size_t	sizend;
	char	nstr;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	sizei = 0;
	sizend = ft_strlen(s1);
	while (*s1)
		s1++;
	size = ft_strlen(s1);
	while (size)
	{
		size--;
	}
	nstr =
}
