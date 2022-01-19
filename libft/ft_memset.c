/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorrtes <acortes@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:07:52 by acortes           #+#    #+#             */
/*   Updated: 2022/01/19 18:29:32 by acorrtes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memeset(void *p, int c, size_t n)
{
    unsigned char   *q;

    q = (unsigned char *)p;
    while(n--)
    {
        *(q++) = (unsigned char)c;
    }
    return(p);
}
