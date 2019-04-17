/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tetramino_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:31:00 by djeanna           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/04/17 18:07:28 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_recursive_walk(char *map, int iter, int iter_prev)
{
	int i;
=======
/*   Updated: 2019/04/17 19:39:20 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int		ft_recursive_walk(char *map, int iter, int iter_prev)
{
	int		i;
>>>>>>> origin/djeanna

	if (map[iter] == '#' && iter >= 0 && iter <= 19)
	{
		i = 0;
<<<<<<< HEAD
		i += ft_recursive_walk(map, iter + 1, iter) +
				ft_recursive_walk(map, iter + 5, iter);
		printf("%d\n", i);
		if (iter != iter_prev)
			i += ft_recursive_walk(map, iter - 1, iter);
		return (i);
=======
		i += ft_recursive_walk(map, iter + 1, iter);
		if (i == 4)
			return (i);
		i += ft_recursive_walk(map, iter + 5, iter);
		if (i == 4)
			return (i);
		if (iter - 1 != iter_prev)
			i += ft_recursive_walk(map, iter - 1, iter);
		if (i == 4)
			return (i);
		return (i + 1);
>>>>>>> origin/djeanna
	}
	else
		return (0);
}

int				is_tetramino_valid(char *map, int iter)
{
	return (ft_recursive_walk(map, iter, 0) == 4);
}
