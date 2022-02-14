/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:06:36 by acorrtes          #+#    #+#             */
/*   Updated: 2022/02/14 20:38:25 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lt;

	lt = (t_list *)malloc(sizeof(*lt));
	if (!(lt))
		return (NULL);
	lt -> content = content;
	lt -> next = NULL;
	return (lt);
}
