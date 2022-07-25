/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 04:15:49 by gclement          #+#    #+#             */
/*   Updated: 2022/07/21 11:02:15 by gclement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int i;
	char *copy;

	i = 0;
	while(src[i] != '\0')
		i++;

	copy = malloc (i * sizeof(char));
	if(copy == NULL)
		return (0);
	i = 0;
	while(src[i] != '\0' )
	{
		copy[i] = src[i];
		i++;
	}	
	return (copy);
}
