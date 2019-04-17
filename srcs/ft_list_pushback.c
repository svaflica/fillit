/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pushback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:33:23 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/17 18:00:38 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/header.h"

/*
**		This function creates a new list with parameter map and
**			pushes it back in list which beginning is beg
*/

t_lst			*ft_list_pushback(t_lst **beg, char **map)
{
	t_lst		*tmp;

	if (beg != NULL)
	{
		if (*beg != NULL)
		{
			tmp = *beg;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = ft_strnew(map);
			if (tmp->next)
			{
				(tmp->next)->prev = tmp;
				tmp->next->next = NULL;
			}
			return (tmp->next);
		}
		else
			*beg = ft_strnew(map);
		return (*beg);
	}
	return (NULL);
}
