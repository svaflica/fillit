/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:22:34 by ashari            #+#    #+#             */
/*   Updated: 2019/04/16 19:57:44 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/header.h"

/*
	Checking:
	1. Do we have 4 '#' ?
	2. Do we have only '.' and '#'
	3. Do we have 4x4 map?
	4. Return if sucsses i * 10 + j
*/

static	int		is_mapchr_valid(char **map)
{
	int			i;
	int			res;
	int			j;
	int			flag;

	i = 0;
	flag = 0;
	res = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == '#')
			{
				flag == 0 ? res = i * 10 + j : 0;
				flag++;
			}
			if (map[i][j] != '.' && map[i][j] != '#')
				return (-1);
			j++;
		}
		if (j != 4)
			return (-1);
		i++;
	}
	if (i != 4 || flag != 4)
		return (-1);
	return (res);
}

/*
	Checking: The Map has 4 rows or not ?
*/

t_list			*is_map_valid(const int fd)
{
	int			count;
	t_list		*first_map;
	char		**map;
	int			res;

	count = 0;
	map = (char **)malloc(sizeof(char *) * 5);
	while (count < 4 && (res = get_next_line(fd, (map + count))) > 0)
		count++;
	map[count] = NULL;
	if (res < 0 || count != 4)
		return (NULL);
	if ((res = is_mapchr_valid(map)) < 0)
		return (NULL);
	first_map = ft_list_new(map);
	return (map);
}
