/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_del.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:34:36 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/18 19:02:09 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

/*
**		This function deletes created map
*/

void			ft_map_del(char **map)
{
	int i;

	if (map && *map)
	{
		i = 0;
		while (map[i])
			ft_strdel(&map[i++]);
		map = NULL;
	}
}
