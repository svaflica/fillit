/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 20:00:32 by ashari            #+#    #+#             */
/*   Updated: 2019/04/18 17:59:36 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"
#include <stdio.h>

int			main(int ac, char **av)
{
	t_lst	*t;
	int		fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (!(ft_check_nl(fd)))
		{
			close(fd);
			return (ft_error_msg());
		}
		else
		{
			close(fd);
			fd = open(av[1], O_RDONLY);
			if (!(t = ft_map_reader(fd, &t)))
				return (ft_error_msg());
		}
	}
	else
		return (ft_error_msg());
	// int i;
	// while (t)
	// {
	// 	i = 0;
	// 	while ((t->map)[i])
	// 	{
	// 		printf("%s\n", (t->map)[i]);
	// 		i++;
	// 	}
	// 	printf("\n");
	// 	t = t->next;
	// }
}
