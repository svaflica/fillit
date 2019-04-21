/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 16:42:37 by ashari            #+#    #+#             */
/*   Updated: 2019/04/21 12:33:27 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

/*
**    Closes file and writes "error"
*/

int		ft_error_msg(int fd)
{
	if (fd >= 0)
		close(fd);
	write(1, "error\n", 6);
	return (0);
}
