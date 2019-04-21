/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:00:07 by ashari            #+#    #+#             */
/*   Updated: 2019/04/13 11:44:43 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(const char *s1, size_t n)
{
	char	*new_s1;
	int		i;

	if (!(new_s1 = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	i = 0;
	while (s1[i] && i < (int)n)
	{
		new_s1[i] = s1[i];
		i++;
	}
	new_s1[i] = '\0';
	return (new_s1);
}
