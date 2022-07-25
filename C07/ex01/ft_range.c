/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 05:27:30 by gclement          #+#    #+#             */
/*   Updated: 2022/07/21 17:09:29 by gclement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int i;
	int *tab;
	   
	tab = malloc((max - min) * sizeof(int));
	if(tab == NULL)
		return (0);
	i = 0;
	if (min > max)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int main()
{
	int *tab = ft_range(5, 15);
	int i;

	i = 0;
	while(i < 10)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
