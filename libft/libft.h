/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes <acortes@student.42barceloacortes> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:22:47 by acortes           #+#    #+#             */
/*   Updated: 2022/01/21 14:22:47 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include<string.h>

typedef struct s_list
{
    void    *content;
    struct s_list *next;
    
}       t_list;


