/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_delone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:51:54 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/21 12:33:32 by djeanna          ###   ########.fr       */
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
