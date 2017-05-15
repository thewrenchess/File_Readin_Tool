/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ri_srcs1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 09:09:25 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/15 11:59:50 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/read_in.h"

char		*ft_strcpy(char *dst, const char *src)
{
	int	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

void		ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	if (!s)
		return ;
	temp = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}

static void	*ft_memalloc(size_t size)
{
	void	*rs;

	rs = malloc(size);
	if (!rs)
		return (NULL);
	ft_bzero(rs, size);
	return (rs);
}

char		*ft_strnew(size_t size)
{
	return ((char*)ft_memalloc(size + 1));
}
