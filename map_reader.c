/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 15:43:49 by ashari            #+#    #+#             */
/*   Updated: 2019/04/16 16:54:07 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>	/* open() and O_XXX flags */
#include <sys/stat.h>	/* S_IXXX flags */
#include <sys/types.h>	/* mode_t */
#include <unistd.h>	/* close() */

char    **ft_map_reader(int fd)
{
    char    **map;
    int     count;

    count = 0;
    map = (char **)malloc(sizeof(char *) * 5);
    while ((rd = read(fd, buf, MAX)) > 0)
	{
		buf[rd] = '\0';
		map = ft_strjoin(buf);
	}
}

int     main(int ac, char **av)
{
    int fd;
    char    **solved_map;

    if (ac == 2)
    {
        fd = open(av[1], O_RDONLY);
        tmp = ft_map_reader(fd, solved_map);
        close (fd);
    }
    else
    {
        write (1, "error\n", 6);
        close(fd);
        return (0);
    }
    return (0);
}