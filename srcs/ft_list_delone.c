/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_delone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:51:54 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/17 16:20:01 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

void		ft_list_delone(t_list **to_del)
{
	if (to_del == NULL)
		return ;
	ft_map_del((*to_del)->map);
	free(*to_del);
	*to_del = NULL;
}
