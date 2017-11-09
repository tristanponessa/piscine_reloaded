/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trponess <trponess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:20:33 by trponess          #+#    #+#             */
/*   Updated: 2017/11/08 17:00:25 by trponess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_print_params(char **av)
{
	int i;
	int j;

	j = 1;
	i = 0;
	while (av[j])
	{
		while (av[j][i])
		{
			ft_putchar(av[j][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	char	*save;

	i = 1;
	if (ac == 1)
		return (0);
	while (av[i + 1])
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			save = av[i];
			av[i] = av[i + 1];
			av[i + 1] = save;
			i = 0;
		}
		i++;
	}
	ft_print_params(av);
	return (0);
}
