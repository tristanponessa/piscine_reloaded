/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trponess <trponess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:31:57 by trponess          #+#    #+#             */
/*   Updated: 2017/11/09 12:03:13 by trponess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

int		ft_error(int nb)
{
	if (nb == 1)
		write(1, "File name missing.\n", 19);
	if (nb == 2)
		write(1, "Too many arguments.\n", 20);
	return (1);
}

int		main(int ac, char **av)
{
	int		fd;
	char	*buf;

	if (ac == 1)
		return (ft_error(1));
	if (ac > 2)
		return (ft_error(2));
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "failed to open\n", 15);
		return (1);
	}
	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
	if (close(fd) == -1)
	{
		write(1, "failed to close\n", 15);
		return (1);
	}
	return (0);
}
