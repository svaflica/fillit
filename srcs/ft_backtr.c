/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:30:37 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/20 21:25:41 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

static char		ft_helper(int w)
{
	char res;

	res = 1;
	while (--w)
		res = (res << 1) | 1;
	return (res);
}

static int		ft_insertion(t_lst **tetr, long long *map, int size,
								int row, int shift)
{
	char		tmp;
	long long	map_tmp[size];
	int			h;
	char		t;
	int			t_row;

	(*tetr)->x = size - shift - 1;
	(*tetr)->y = row;
	t = ft_helper((*tetr)->w);
	tmp = (*tetr)->map;
	h = (*tetr)->h;
	t_row = row;
	while (h)
	{
		map_tmp[row] = map[row] ^ ((tmp & t) << (size - 1 - shift));
		if (map_tmp[row] - map[row] != ((tmp & t) << (size - 1 - shift)))
			return (0);
		tmp = tmp >> (*tetr)->w;
		row++;
		h--;
	}
	map = ft_arrncpy(map, map_tmp, t_row, size);
	return (1);
}

static void		ft_free_from(t_lst *tetr, long long *map)
{

}

int				ft_try_to_solve(t_lst *tetr, long long *map, int size)
{
	int row;
	int	shift;
	int solve;

	shift = 0;
	row = 0;
	solve = 0;
	while (tetr)
	{
		if (((map[row] >> (size - 1 - shift)) & 1) == 0)
		{
			if (tetr->h > size - row)
				return (0);
			else if (ft_insertion(&tetr, map, size, row, shift))
				solve = ft_try_to_solve(tetr->next, map, size);
			if (solve)
				return (1);
			else
				ft_free_from(tetr->next, map);
		}
		if (++shift == size || tetr->w > size - shift)
		{
			shift = 0;
			row++;
		}
	}
	return (1);
}
