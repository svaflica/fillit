/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 08:52:11 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/22 12:07:33 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_list_size(t_lst *beg)
{
	int res;

	res = 0;
	while (beg)
	{
		res++;
		beg = beg->next;
	}
	return (res);
}
