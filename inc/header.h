/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 15:48:49 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/17 16:22:37 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "../libft/libft.h"

typedef struct	s_list
{
	char		**map;

	t_list		*next;
	t_list		*prev;
}				t_list;

t_list			*ft_list_new(char **map);
t_list			*ft_list_pushback(t_list **beg, char **map);
void			ft_list_delone(t_list **to_del);
void			ft_list_del(t_list **beg);

char			**ft_map_dup(char **map);
void			ft_map_del(char **map);

int				get_next_line(const int fd, char **line);
int				is_tetramino_valid(char *cur, int iter);

#endif
