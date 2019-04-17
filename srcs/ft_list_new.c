/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:57:19 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/17 18:00:28 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/header.h"

/*
**		This function creates a new object of t_list type
*/

t_lst		*ft_list_new(char **map)
{
	t_lst *new;

	if (!(new = (t_lst *)malloc(sizeof(t_lst))))
		return (NULL);
	new->map = ft_map_dup(map);
	new->next = NULL;
	new->prev = NULL;
}
