/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 19:31:20 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/18 21:00:12 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_go_walking(char *map, int iter, char where)
{
	int res;
	int	i;

	res = 0;
	i = iter;
	if (where == 'c')
	{
		while (i <= iter + 15)
		{
			if (map[i] == '#')
				res++;
			i += 5;
		}
	}
	else if (where == 'r')
	{
		while (i < iter + 4)
			if (map[i++] == '#')
				res++;
	}
	return (res);
}

static int		ft_num_in_row(char *map)
{
	int		iter;
	int		num;
	int		max_num;

	iter = 5;
	max_num = ft_go_walking(map, 0, 'r');
	while (iter < 19)
	{
		num = ft_go_walking(map, iter, 'r');
		if (max_num < num)
			max_num = num;
		iter += 5;
	}
	return (max_num);
}

static int		ft_num_in_col(char *map)
{
	int		iter;
	int		num;
	int		max_num;

	iter = 1;
	max_num = ft_go_walking(map, 0, 'c');
	while (iter < 4)
	{
		num = ft_go_walking(map, iter, 'c');
		if (max_num < num)
			max_num = num;
		iter++;
	}
	return (max_num);
}

int				ft_search_pos(char *map)
{
	int iter;
	int check;
	int res;

	iter = 0;
	check = 0;
	while (map[iter])
	{
		if (map[iter] == '#' && !check)
		{
			check = 1;
			res = iter;
		}
		else if (map[iter] == '\n' && check == 1)
		{
			check = 2;
			res = iter;
		}
	}
	return (res);
}

char			ft_map_create(char *map)
{
	int		iter;
	int		col;
	int		row;

	col = ft_num_in_col(map);
	row = ft_num_in_row(map);
	iter = ft_search_pos(map);
	iter = iter - row;
}
