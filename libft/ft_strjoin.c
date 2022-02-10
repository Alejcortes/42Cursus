/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:19:33 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/10 12:17:29 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*lloc;
	int		i;
	int		len1;
	int		len2;

	if (s1 && s2)
	{
	len1 = strlen(s1);
	len2 = strlen(s2);
	lloc = (char *)malloc((len1 + len2 + 1) * sizeof(char));
		if (lloc == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			lloc[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			lloc[len1] = s2[i];
			len1++;
		}
		lloc[len1] = '\0';
		return (lloc);
	}
	return (NULL);
}
