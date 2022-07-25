/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:41:57 by gclement          #+#    #+#             */
/*   Updated: 2022/07/21 18:38:10 by gclement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	s;

	x = 0;
	s = 0;
	while(dest[x])
		x++;

	while(src[s])
	{
		dest[x] = src[s];
		s++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0' )
	{
		n++;
	}
	return (n);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int				i;
	char	*dest;

	i = 0;
	while(i < size && strs[i])
	{
		dest = malloc (sizeof(char*) * (ft_strlen(strs[i]) + ft_strlen(sep)));
		i++;
	}
	if (dest == 0)
		return (0);
	i = 0;
	while (i < size && strs[i])
	{
		ft_strcat(dest, strs[i]);
		if(strs[i + 1] && i != size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}

int	main()
{
	char *str1 = "j'aime les nouilles";
	char *str2 = "Le cheval c'est genial";
	char *str3 = "Le mardi,c'est gnochi";
	char **strs = malloc(3);
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	printf("%s",ft_strjoin(3, strs," | "));
}
