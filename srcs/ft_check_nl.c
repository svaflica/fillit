/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_nl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 16:56:21 by ashari            #+#    #+#             */
/*   Updated: 2019/04/21 12:33:27 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

/*
**    Check if map has valid number of \n
*/

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
