/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 15:48:49 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/17 18:01:38 by djeanna          ###   ########.fr       */
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

typedef struct	s_lst
{
	char		**map;

	struct s_lst		*next;
	struct s_lst		*prev;
}				t_lst;

t_lst			*ft_list_new(char **map);
t_lst			*ft_list_pushback(t_lst **beg, char **map);
void			ft_list_delone(t_lst **to_del);
void			ft_list_del(t_lst **beg);

char			**ft_map_dup(char **map);
void			ft_map_del(char **map);

int				get_next_line(const int fd, char **line);
int				is_tetramino_valid(char *cur, int iter);

#endif
