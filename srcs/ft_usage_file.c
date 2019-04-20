/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 13:35:09 by ashari            #+#    #+#             */
/*   Updated: 2019/04/20 15:31:47 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

int		ft_usage_file(void)
{
	int			fd;
	char		buf[31];

	if ((fd = open("./usage.txt", O_RDONLY)) == -1)
		return (ft_error_msg(fd));
	while (read(fd, buf, 1))
		write(1, buf, 1);
	close(fd);
	return (0);
}
