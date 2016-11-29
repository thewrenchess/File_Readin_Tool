/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readin.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:06:53 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/22 14:07:00 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READIN_H
# define READIN_H

# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>

typedef	struct	s_read
{
	size_t		buf_size;
	char		*str;
}				t_read;

void			ft_bzero(void *s, size_t n);
void			*ft_memalloc(size_t size);
char			*ft_strnew(size_t size);
char			*ft_strcpy(char *dst, const char *src);
void			append_line(t_read **lst, char c, size_t i);

#endif
