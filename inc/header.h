/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 15:48:49 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/16 16:41:40 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

typedef struct	s_list
{
	char		**map;

	t_list		*next;
	t_list		*prev;
}				t_list;

t_list			*ft_list_new(char **map);
t_list			*ft_list_pushback(t_list **beg, char **map);
t_list			*ft_list_delone(t_list **beg, t_list *to_del);
t_list			*ft_list_del(t_list **beg);

int				get_next_line(const int fd, char **line);
char			**ft_map_create(const int fd); //1
t_list			*is_map_valid(const int fd); //2
/* (char **) is pointer on the first '#'   */
int				is_tetramino_valid(char **cur, char **prev);

#endif
