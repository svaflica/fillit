/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:57:19 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/17 15:59:58 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/header.h"

/*
**		This function creates a new object of t_list type
*/

t_list		*ft_list_new(char **map)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->map = ft_map_dup(map);
	new->next = NULL;
	new->prev = NULL;
}
