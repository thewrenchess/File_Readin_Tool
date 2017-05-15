/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_in.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 09:06:27 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/15 12:27:41 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_IN_H
# define FT_READ_IN_H

# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>

# define BUFF_SIZE 1024
# define USAGE ft_putstr("USAGE: ./a.out (optional)<PATH OF FILE>\n")

typedef struct	s_read
{
	char		*str;
	int			current_size;
	int			max_size;
}				t_read;

char			*ft_strcpy(char *dst, const char *src);
void			ft_bzero(void *s, size_t n);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
char			*ft_strcat(char *s1, const char *s2, int len);
int				read_in(int fd, char **line);

#endif
