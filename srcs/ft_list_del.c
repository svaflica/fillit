/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:14:47 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/18 11:40:26 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

/*
**		This function completely removes list
*/

void			ft_list_del(t_lst **beg)
{
	t_lst	*tmp;
	t_lst	*tmp2;

	if (beg == NULL)
		return ;
	tmp = *beg;
	while (tmp)
	{
		tmp2 = tmp->next;
		ft_list_delone(&tmp);
		tmp = tmp2;
	}
	beg = NULL;
}
