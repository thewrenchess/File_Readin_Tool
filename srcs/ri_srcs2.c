/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ri_srcs2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 09:56:40 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/15 11:22:46 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_read_in.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

char		*ft_strcat(char *s1, const char *s2, int len)
{
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	while (s2[i])
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}

static void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	free(*ap);
	*ap = NULL;
}

void		ft_strdel(char **as)
{
	ft_memdel((void**)as);
}
