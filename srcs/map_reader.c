/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:01:04 by ashari            #+#    #+#             */
/*   Updated: 2019/04/18 11:14:58 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

static	char		*del_all(t_lst **tetramino, char *tmp)
{
	printf("error");
	ft_list_del(tetramino);
	ft_strdel(&tmp);
	return (NULL);
}

static	char		*is_valid(char *buff, t_lst **tetramino, int res)
{
	int				loc;
	t_lst			*tetramino_tmp;
	char			*tmp;

	if ((loc = is_map_valid(buff, res)) >= 0)
	{
		tmp = ft_strndup(buff, 20);
		if (is_tetramino_valid(tmp, loc))
		{
			if (!(tetramino_tmp =
				ft_list_pushback(tetramino, ft_strsplit(tmp, '\n'))))
				return (del_all(tetramino, tmp));
		}
		else
			return (del_all(tetramino, tmp));
	}
	else
		return (NULL);
	return (tmp);
}

t_lst				*map_reader(int fd, t_lst **tetramino)
{
	int				res;
	char			*tmp;
	char			buff[22];

	tmp = NULL;
	while ((res = read(fd, buff, 21)) > 20)
	{
		buff[res] = '\0';
		if (!(is_valid(buff, tetramino, res)))
			return ((t_lst *)del_all(tetramino, tmp));
	}
	if (res == 20)
	{
		buff[20] = '\0';
		if (!(is_valid(buff, tetramino, res)))
			return ((t_lst *)del_all(tetramino, tmp));
	}
	else
		return ((t_lst *)del_all(tetramino, tmp));
	if (res == -1)
		return (NULL);
	return (*tetramino);
}
