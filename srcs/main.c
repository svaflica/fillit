/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 20:00:32 by ashari            #+#    #+#             */
/*   Updated: 2019/04/19 14:16:33 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

int			main(int ac, char **av)
{
	t_lst	*t;
	int		fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (!(ft_check_nl(fd)))
			return (ft_error_msg(fd));
		else
		{
			close(fd);
			fd = open(av[1], O_RDONLY);
			if (!(t = ft_map_reader(fd, &t)))
				return (ft_error_msg(fd));
			ft_solver(t);
		}
	}
	else
		return (ft_error_msg(fd));
}