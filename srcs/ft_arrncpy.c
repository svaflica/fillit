/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 15:59:59 by ashari            #+#    #+#             */
/*   Updated: 2019/04/20 20:17:35 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

void	*ft_arrncpy(long long *dst, long long *src, int i, int n)
{
	int				j;

	j = 0;
	while (src[i] && j < n)
	{
		dst[j] = src[i];
		j++;
		i++;
	}

	return (dst);
}
