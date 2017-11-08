/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trponess <trponess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:21:56 by trponess          #+#    #+#             */
/*   Updated: 2017/11/08 12:21:22 by trponess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	char *dup;

	i = 0;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(src)));
	if (!dup)
		return (NULL);
	while (*src + 1)
	{
		dup[i] = *src;
		src++;
		i++;
	}
	return (dup);
}
