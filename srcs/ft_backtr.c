/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:30:37 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/20 14:32:35 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

static int		ft_insertion(t_lst *tetr, long long *map, int size, int row)
{
	char tmp;

	while ()
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
			if (ft_insertion(tetr, map, size, row))
			{
				ft_try_to_solve(tetr->next, map, size);
				ft_free_from(tetr, map);
			}
			else if (row == size - 1 && tetr->w <= size - shift - 1 && // ?
						tetr->h >= size - row)
				return (0);
		if (--shift == -1 || tetr->w <= size - shift - 1)
		{
			shift = size - 1;
			row++;
		}
	}
	return (1);
}
