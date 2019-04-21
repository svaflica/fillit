/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 11:00:45 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/21 11:42:12 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		ft_map_create(char *map, int coord, int h, int w)
{
	char	res;
	int		i_w;

	res = 0;
	//coord += (h - 1) * 5 + w - 1;
	while (h--)
	{
		i_w = w;
		while (i_w--)
			if (map[coord++] == '#')
				res = (res << 1) | 1;
			else
				res <<= 1;
		//coord = coord - 5 + w;
		coord = coord + 5 - w;
	}
	return (res);
}
