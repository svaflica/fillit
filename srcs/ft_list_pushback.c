/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pushback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:33:23 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/18 19:02:21 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

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
			tmp->next = ft_list_new(map);
			if (tmp->next)
			{
				(tmp->next)->prev = tmp;
				tmp->next->next = NULL;
			}
			ft_map_del(map);
			return (tmp->next);
		}
		else
			*beg = ft_list_new(map);
		ft_map_del(map);
		return (*beg);
	}
	return (NULL);
}
