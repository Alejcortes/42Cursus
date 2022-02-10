/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:19:10 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/10 15:46:08 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	flagtrim(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
		if (s1[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	sizend;
	char	*nstr;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	sizend = ft_strlen(s1);
	while (flagtrim(set, s1[i]) && s1[i])
		i++;
	while (flagtrim(set, s1[sizend - 1]) && (sizend -1))
		sizend--;
	if (sizend < i)
		sizend = i;
	nstr = malloc(sizend - i + 1);
	if (!nstr)
		return (NULL);
	while (i < sizend)
		nstr[j++] = s1[i++];
	nstr[j] = '\0';
	return (nstr);
}
