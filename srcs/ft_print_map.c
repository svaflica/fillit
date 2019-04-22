/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 11:57:19 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/21 19:20:43 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

static	int		ft_print(char *map, int size)
{
	int			i;

	i = 0;
	while (map[i])
	{
		write(1, &map[i], 1);
		if (i % size == size - 1)
			write(1, "\n", 1);
		i++;
	}
	return (1);
}

static	void	ft_insert_tetr(t_lst *tetr, char *map, int i, int letter)
{
	int		w_tmp;
	int		j;

	j = 1;
	w_tmp = tetr->w;
	while (w_tmp)
	{
		if (((tetr->map >> (tetr->h * tetr->w - j)) & 1) == 1)
			map[i] = letter;
		j++;
		w_tmp--;
		i++;
	}
}

int			ft_print_map(t_lst *tetr, int size)
{
	char	*map;
	int		i;
	char	letter;

	letter = 'A';
	if (!(map = ft_strnew(size * size)))
		return (0);
	map = ft_memset(map, '.', size * size);
	while (tetr)
	{
		i = size * tetr->y + tetr->x;
		while (tetr->h)
		{
			ft_insert_tetr(tetr, map, i, letter);
			(tetr->h)--;
			i = i + size;
		}
		tetr = tetr->next;
		letter++;
	}
	return (ft_print(map, size));
}
