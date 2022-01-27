/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes <acortes@student.42barceloacortes> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:21:32 by acortes           #+#    #+#             */
/*   Updated: 2022/01/27 10:48:55 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strchr (const char *s, int c)
{
    char    *q;

    while (*q != c)
        {
            if (*q == '\0')
                return(NULL);
        *q++;
        }
    return(*q);
}
