/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 08:42:08 by gclement          #+#    #+#             */
/*   Updated: 2022/07/21 09:35:41 by gclement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int min_temp;

	i = 0;
	min_temp  = min;
	while (i < max - min_temp)
	{
		range[i] = malloc(sizeof(int));
		if(range[i] == 0)
			return (0);
		*range[i] = min;
		min++;
		i++;
	}
	return (i);
}
