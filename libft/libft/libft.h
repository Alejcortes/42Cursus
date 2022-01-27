/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes <acortes@student.42barceloacortes> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:22:47 by acortes           #+#    #+#             */
/*   Updated: 2022/01/27 20:45:38 by acortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<string.h>
# include<unistd.h>
# include<stdlib.h>

typedef struct s_list
{
    void			*content;
    size_t			content_size;
    struct s_list	*next;

}				t_list;

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_ialnum(int c);
int	ft_ascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_memeset(void *p, int c, size_t n);
int	ft_memmove(void *dest, const void *src, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
#endif
