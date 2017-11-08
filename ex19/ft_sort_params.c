/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trponess <trponess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:20:33 by trponess          #+#    #+#             */
/*   Updated: 2017/11/08 11:19:04 by trponess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_print_params(char **av)
{
	int i;
	int j;

	j = 1;
	i = 0;
	while (av[j])
	{
		ft_putstr(av[j]);
		write(1, "\n", 1);
		j++;
	}
}

int		 main(int ac, char **av)
{
	int i;
	int j;
	int ch;

	i = 1;
	j = 0;
	ch = 1;
	while (av[i + 1])
	{
		while (av[i][j] && ch == 1)
		{
			if (av[i][j] > av[i + 1][j])
			{
				ft_swap(&av[i], &av[i + 1]);
				ch = 0;
				j = 0;
				i = 1;
			}
			j++;
		}
		ch = 1;
		i++;
	}
	ft_print_params(av);
	return (0);
}
