/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trponess <trponess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 08:29:03 by trponess          #+#    #+#             */
/*   Updated: 2017/11/08 08:37:16 by trponess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;

	a = 1;
	while ((a * a) < nb)
		a++;
	if ((a * a) == nb)
		return (a);
	else
		return (0);
}
