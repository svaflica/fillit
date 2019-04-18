/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_nl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 16:56:21 by ashari            #+#    #+#             */
/*   Updated: 2019/04/18 17:26:33 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

int			ft_check_nl(int fd)
{
	int		res;
	int		i;
	int		count;
	char	buff[546];

	i = 0;
	count = 0;
	if ((res = read(fd, buff, 546)) < 546)
	{
		buff[res] = '\0';
		while (buff[i])
		{
			if (buff[i] == '\n')
				count++;
			i++;
		}
		if ((count % 2) == (((res / 10) - (res % 10)) % 2)
		&& ((count % 10) == 4 || (count % 10) == 9))
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
