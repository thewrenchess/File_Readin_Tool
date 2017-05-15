/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 12:16:47 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/15 12:27:40 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/read_in.h"

static void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(const char *s)
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

static void	helper(const int fd)
{
	int		ret;
	char	*line;

	ret = read_in(fd, &line);
	if (ret >= 0)
	{
		ft_putstr(line);
		ft_strdel(&line);
	}
}

int			main(int args, char **argv)
{
	int		fd;
	int		i;

	if (args < 1 || !argv)
	{
		USAGE;
		return (-1);
	}
	if (args == 1)
		helper(0);
	else
	{
		i = 1;
		while (i < args)
		{
			fd = open(argv[i], O_RDONLY);
			helper(fd);
			if (fd > 0)
				close(fd);
			i++;
		}
	}
	return (0);
}