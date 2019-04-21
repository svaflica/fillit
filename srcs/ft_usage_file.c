/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 13:35:09 by ashari            #+#    #+#             */
/*   Updated: 2019/04/21 14:53:59 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"
#include <stdio.h>

int		ft_usage_file(void)
{
	int			fd;
	char		buf[2];

	if ((fd = open("srcs/usage", O_RDONLY)) == -1)
	{
		perror("file");
		printf("bfdklncbnjlclcnl");
		return (ft_error_msg(fd));
	}
	while (read(fd, buf, 1))
		write(1, buf, 1);
	close(fd);
	return (0);
}
