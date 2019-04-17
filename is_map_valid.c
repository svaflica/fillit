/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_map_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:34:42 by ashari            #+#    #+#             */
/*   Updated: 2019/04/17 19:31:47 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/header.h"

int	is_map_valid(char *buff)
{
	int			i;
	int			res;
	int			count;

	i = 0;
	count = 0;
	while (buff[i])
		if ((buff[i] == '.' || buff[i] == '#')
		|| (buff[i] == '\n' && (i % 10 == 9 || i % 10 == 4 || i == 20)))
		{
			if (buff[i] == '#')
			{
				if (count == 0)
					res = i;
				count++;
			}
			i++;
		}
		else
			return (-1);
	if (count != 4 || i != 21)
		return (-1);
	return (res);
}
