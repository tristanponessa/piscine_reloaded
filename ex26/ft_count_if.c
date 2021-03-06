/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trponess <trponess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:00:43 by trponess          #+#    #+#             */
/*   Updated: 2017/11/08 13:06:27 by trponess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			x++;
		i++;
	}
	return (x);
}
