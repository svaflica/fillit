/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:30:37 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/20 16:12:16 by djeanna          ###   ########.fr       */
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

static int		ft_insertion(t_lst *tetr, long long *map, int size,
								int row, int shift)
{
	char		tmp;
	long long	map_tmp[size];
	int			h;
	char		t;

	tetr->x = size - shift - 1;
	tetr->y = row;
	t = ft_helper(tetr->w);
	tmp = tetr->map;
	h = tetr->h;
	while (h)
	{
		map_tmp[row] = map[row] ^ ((tmp & t) << (size - shift + 1));
		if (map_tmp[tmp] - map[tmp] == tmp)
			return (0);
		tmp = tmp >> tetr->w;
		h--;
	}
	// copy from map_tmp to map
	return (1);
}

static void		ft_free_from(t_lst *tetr, long long *map)
{

}

int				ft_try_to_solve(t_lst *tetr, long long *map, int size)
{
	int row;
	int	shift;

	shift = size - 1;
	row = 0;
	while (tetr)
	{
		if ((map[row] >> shift) & 1 == 0)
			if (ft_insertion(tetr, map, size, row, shift))
			{
				ft_try_to_solve(tetr->next, map, size);
				ft_free_from(tetr->next, map);
			}
			else if (row == size - 1 && tetr->w <= size - shift - 1 &&
						tetr->h >= size - row)
				return (0);
		if (--shift == -1 || tetr->w <= size - shift - 1)
		{
			shift = size - 1;
			row++;
		}
	}
	while (--size)
		printf("%d\n", map[size]);
	return (1);
}
