/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_delone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:51:54 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/20 15:34:43 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

/*
**		This function removes one list's element
*/

void		ft_list_delone(t_lst **to_del)
{
	if (to_del == NULL)
		return ;
	*to_del = NULL;
}
