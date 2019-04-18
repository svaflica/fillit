/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 15:48:49 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/18 19:59:12 by djeanna          ###   ########.fr       */
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
	//char		**map;
	char		map;

	struct s_lst		*next;
	struct s_lst		*prev;
}				t_lst;

t_lst			*ft_list_new(char *map);
t_lst			*ft_list_pushback(t_lst **beg, char **map);
void			ft_list_delone(t_lst **to_del);
void			ft_list_del(t_lst **beg);

char			**ft_map_dup(char **map);
void			ft_map_del(char **map);

int				ft_is_tetramino_valid(char *cur, int iter);
int				ft_check_nl(int fd);
int				ft_error_msg(int fd);
int				ft_is_map_valid(char *buff, int res1);
t_lst			*ft_map_reader(int fd, t_lst **tetramino);

#endif
