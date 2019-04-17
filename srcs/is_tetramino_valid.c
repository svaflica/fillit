/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tetramino_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:31:00 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/17 17:50:24 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_recursive_walk(char *map, int iter, int iter_prev)
{
	int i;

	if (map[iter] == '#' && iter >= 0 && iter <= 19)
	{
		i = 0;
		i += ft_recursive_walk(map, iter + 1, iter) +
				ft_recursive_walk(map, iter + 5, iter);
		if (iter != iter_prev)
			i += ft_recursive_walk(map, iter - 1, iter);
		return (i);
	}
	else
		return (0);
}

int				is_tetramino_valid(char *map, int iter)
{
	return (ft_recursive_walk(map, iter, 0) == 4);
}
