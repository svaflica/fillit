/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_map_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:34:42 by ashari            #+#    #+#             */
/*   Updated: 2019/04/18 14:51:24 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

/*
**		This function
*/

int		is_map_valid(char *buff, int res1)
{
	int			i;
	int			res;
	int			count;

	i = 0;
	count = 0;
	while (buff[i])
	{
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
	}
	if (count != 4 || i != res1)
		return (-1);
	return (res);
}
