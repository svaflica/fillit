/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tetramino_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:31:00 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/17 22:20:40 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int		ft_recursive_walk(char *map, int iter, int iter_prev)
{
	int		i;

	if (map[iter] == '#' && iter >= 0 && iter <= 19)
	{
		i = 0;
		i += ft_recursive_walk(map, iter + 1, iter);
		// if (i == 4)
		// 	return (i);
		i += ft_recursive_walk(map, iter + 5, iter);
		// if (i == 4)
		// 	return (i);
		if (iter - 1 != iter_prev)
			i += ft_recursive_walk(map, iter - 1, iter);
		// if (i == 4)
		// 	return (i);
			printf("%d\n", i);
		return (i + 1);
	}
	else
		return (0);
}

int				is_tetramino_valid(char *map, int iter)
{
	return (ft_recursive_walk(map, iter, -1) - 1 == 4);
}
