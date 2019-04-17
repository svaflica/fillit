/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tetramino_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:31:00 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/17 16:33:53 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_recursive_walk(char *map, int iter)
{
	
}

int				is_tetramino_valid(char *map, int iter)
{
	return (ft_recursive_walk(map, iter) == 4);
}
