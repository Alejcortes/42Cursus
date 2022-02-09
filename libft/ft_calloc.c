/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:35 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/09 18:05:05 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t ptr, size_t size)
{
	void	*result;
	size_t	t;

	t = ptr * size;
	result = malloc(t);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, t);
	return (result);
}
