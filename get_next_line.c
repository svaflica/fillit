/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 18:59:28 by ashari            #+#    #+#             */
/*   Updated: 2019/04/13 18:59:31 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_create_line(char **fd_str, char **line, const int fd, int res)
{
	int		i;
	char	*tmp;

	i = 0;
	while (fd_str[fd][i] != '\n' && fd_str[fd][i] != '\0')
		i++;
	if (fd_str[fd][i] == '\n')
	{
		*line = ft_strndup(fd_str[fd], i);
		tmp = ft_strdup(fd_str[fd] + i + 1);
		free(fd_str[fd]);
		fd_str[fd] = tmp;
		if (fd_str[fd] == '\0')
			ft_strdel(&fd_str[fd]);
	}
	else if (fd_str[i] == '\0')
	{
		if (res == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strndup(fd_str[fd], i);
		ft_strdel(&fd_str[fd]);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	char	*fd_str[4865];
	char	*tmp;
	char	buf[BUFF_SIZE + 1];
	int		res;

	if (fd < 0 && line == NULL)
		return (-1);
	while ((res = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[res] = '\0';
		if (fd_str[fd] == NULL)
			fd_str[fd] = ft_strnew(1);
		tmp = ft_strjoin(fd_str[fd], buf);
		free(fd_str[fd]);
		fd_str[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (res < 0)
		return (-1);
	else if (res == 0 && (fd_str[fd] == NULL || fd_str[fd][0] == '\0'))
		return (0);
	return (ft_create_line(fd_str, line, fd, res));
}
