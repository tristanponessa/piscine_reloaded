/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trponess <trponess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 08:12:46 by trponess          #+#    #+#             */
/*   Updated: 2017/11/08 08:27:35 by trponess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_recursive_factorial(int nb)
{
		if (nb < 0 || nb > 12)
			return (0);
		if (nb == 0 || nb == 1)
			return (1);
		return (nb * ft_recursive_factorial(nb - 1));
}
