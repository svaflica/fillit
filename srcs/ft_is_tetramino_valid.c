/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_tetramino_valid.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:31:00 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/18 18:02:08 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

/*
**		Usage
*/

int		ft_is_tetramino_valid(char *map, int iter)
{
	int valid;

	valid = 0;
	while (iter <= 19 && valid <= 5)
	{
		if (map[iter] == '#')
		{
			if (map[iter + 1] == '#')
				valid++;
			if (iter <= 14 && map[iter + 5] == '#')
				valid++;
			if (iter > 0 && map[iter - 1] == '#')
				valid++;
			if (iter >= 5 && map[iter - 5] == '#')
				valid++;
		}
		iter++;
	}
	return (valid > 5);
}
