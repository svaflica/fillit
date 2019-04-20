/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:30:37 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/20 11:10:20 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

int		ft_insertion(t_lst *tetr, long long *map, int size)
{
	
}

// int		ft_can_insert_or_not(t_lst *tetr, long long *map, int size, int shift)
// {
// 	/*char		fig;
// 	int			shift_f;

// 	fig = tetr->map;
// 	shift_f = 1;
// 	while (fig != 1)
// 	{
// 		if (fig & 1 == 1 && )
// 	}
// 	return (1);*/

// }

// void	ft_insert_tetr(t_lst *tetr, long long *map, int shift)
// {

// }

int		ft_try_to_solve(t_lst *tetr, long long *map, int size)
{
	int	shift;
	int solved;

	solved = 0;
	shift = size * size - 1;
	while (tetr)
	{
		// if ((map[1] >> shift) & 1 == 0)
		// {
		// 	if (ft_can_insert_or_not)
		// 		ft_insert_tetr();
		// 	else
		// 			shift--;
		// }
		// else if (map[1] == LLONG_MAX && (map[2] >> shift) & 1 == 0)
		// {

		// }
		// else if (shift == 0 && )
		shift++;

	}
	return (1);
}
