/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 20:00:32 by ashari            #+#    #+#             */
/*   Updated: 2019/04/20 18:15:53 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

int			main(int ac, char **av)
{
	t_lst	*t;
	int		fd;

	if (ac == 2)
	{
		if ((fd = open(av[1], O_RDONLY)) == -1)
			return (ft_error_msg(fd));
		if (!(ft_check_nl(fd)))
			return (ft_error_msg(fd));
		else
		{
			close(fd);
			if ((fd = open(av[1], O_RDONLY)) == -1)
				return (ft_error_msg(fd));
			if (!(t = ft_map_reader(fd, &t)))
				return (ft_error_msg(fd));
			ft_solver(t);
			ft_list_del(&t);
		}
	}
	else
		return (ft_usage_file());
}
