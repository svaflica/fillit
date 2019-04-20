/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 15:59:59 by ashari            #+#    #+#             */
/*   Updated: 2019/04/20 16:05:11 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

void				*ft_arrncpy(void *dst, void *src, int i, int n)
{
	int				j;
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = dst;
	src1 = src;
	j = 0;
	while (src1[i] && j < n)
	{
		dst1[j] = src1[i];
		j++;
		i++;
	}
	return ((void *)dst1);
}
