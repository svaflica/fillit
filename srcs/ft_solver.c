/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 18:10:07 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/19 14:28:47 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

static  int		ft_solution_map_size(int n)
{
	return (ft_sqrt(n));
}

static	char	*set_solution_map(int size)
{
	char *map;

	if (!(map = ft_strnew(size)))
		return (NULL);
	ft_memset(map, '.', size);
	return (map);
}

int				ft_solver(t_lst *tetramino)
{
	int		size;
	char	*map;
	int i = 0;

	// map = set_solution_map(ft_list_size(tetramino) * 4 * 4);
	// size = ft_solution_map_size(size * 4);
	while (tetramino)
	{
		while (tetramino->map != 1)
	{
		if (tetramino->map & 1)
			printf("A");
		else
			printf(".");
		tetramino->map >>= 1;
		i++;
	}
		printf("\n\n");
		tetramino = tetramino->next;
	}
	return (1);
}
