/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 18:10:07 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/21 19:06:47 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

static	int		ft_solution_map_size(int n)
{
	return (ft_sqrt(n));
}

static void		fill_by_zero(long long *map, int size)
{
	while (--size >= 0)
		map[size] = 0;
}


static int		ft_null(t_lst *new)
{
	char	tmp;
	int		iter;

	tmp = new->map;
	iter = 0;
	while (tmp)
	{
		iter++;
		tmp >>= 1;
	}
	return (new->h * new->w - iter);
}

static int		ft_is_there_nul(t_lst *tetr)
{
	while (tetr)
	{
		if (ft_null(tetr) > 0)
			return (1);
		tetr = tetr->next;
	}
	return (0);
}

int				ft_solver(t_lst *tetramino)
{
	int				size;
	long long		map[11];
	int				solve;
	int				num_null;

	fill_by_zero(map, 11);
	num_null = ft_is_there_nul(tetramino);
	size = ft_solution_map_size(ft_list_size(tetramino) * 4);
	solve = 0;
	while (!solve)
	{
		solve = ft_try_to_solve(tetramino, map, size, num_null);
		if (!solve)
		{
			fill_by_zero(map, size);
			size++;
		}
	}
	return (ft_print_map(tetramino, size));
}
