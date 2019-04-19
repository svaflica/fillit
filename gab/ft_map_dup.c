/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:13:04 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/18 19:02:14 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

/*
**		This function creates a duplicate of map to add it into list
*/

char	**ft_map_dup(char **map)
{
	char	**res;
	int		w;
	int		h;

	if (!map && !*map)
		return (NULL);
	w = 0;
	h = 0;
	while (map[h][w])
		w++;
	while (map[h])
		h++;
	if (!(res = (char **)malloc(sizeof(char *) * (h + 1))))
		return (NULL);
	res[h] = NULL;
	h = -1;
	while (map[++h])
		if (!(res[h] = ft_strdup(map[h])))
			return (NULL);
	return (res);
}
