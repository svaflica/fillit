/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:01:04 by ashari            #+#    #+#             */
/*   Updated: 2019/04/17 19:53:07 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/header.h"

static	char		*del_all(t_lst **tetramino, char *tmp)
{
	ft_list_del(tetramino);
	ft_strdel(&tmp);
	return (NULL);
}

static	char		*is_valid(char *buff, t_lst **tetramino)
{
	int				loc;
	t_lst			*tetramino_tmp;
	char			*tmp;

	if ((loc = is_map_valid(buff)) >= 0)
	{
		tmp = ft_strndup(buff, 20);
		if (is_tetramino_valid(tmp, loc))
		{
			if (!(tetramino_tmp =
			ft_list_pushback(tetramino, &tmp)))
				return (del_all(tetramino, tmp));
		}
		else
			return (del_all(tetramino, tmp));
	}
	else
		return (NULL);
	return (tmp);
}

t_lst				**map_reader(int fd, t_lst **tetramino)
{
	int				res;
	char			*tmp;
	char			*buff;

	tmp = NULL;
	buff = NULL;
	while ((res = read(fd, buff, 21)) > 20)
	{
		buff[res] = '\0';
		if (!(is_valid(buff, tetramino)))
			return ((t_lst **)del_all(tetramino, tmp));
	}
	if (res == 20)
	{
		buff[20] = '\0';
		if (!(is_valid(buff, tetramino)))
			return ((t_lst **)del_all(tetramino, tmp));
	}
	if (res == -1)
		return (NULL);
	return (tetramino);
}
