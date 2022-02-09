/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:08:02 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/09 19:32:41 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*lloc;

	i = ft_strlen(s1) + 1;
	lloc = (char *)malloc(i * sizeof(char));
	if (lloc == NULL)
		return (NULL);
	ft_memcpy(lloc, s1, i);
	return (lloc);
}
