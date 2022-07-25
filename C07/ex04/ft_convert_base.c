/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:52:24 by gclement          #+#    #+#             */
/*   Updated: 2022/07/22 11:24:08 by gclement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while(base[i])
	{
		j = 1;
		if(base[i] == '+' || base[i] == '-')
			return (0);
		while(base[i + j] != '\0')
		{
			if(base[i] == base[i + j])
				return (0);
				j++;
		}
		i++;
	}
	if(i <= 1)
		return (0);
	return (i);
}
int ft_index(char *base, char to_find)
{
	int i;

	i = 0;
	while(base[i])
	{
		if(base[i] == to_find)
			return (i);

		i++;
	}
	return (-1);
}
int check_isspace(char str)
{
	if(str == ' ')
		return (1);
	else if(str == '\r')
		return (1);
	else if(str == '\f')
		return (1);
	else if(str == '\v')
		return (1);
	else if(str == '\n')
		return (1);
	else if(str == '\t')
		return (1);

	return (0);
}

int	ft_putnbr_base(int nbr, char *base)
{
	long	int lnbr;
	int base_l = base_is_valid(base);

	lnbr = nbr;
	if(base_l != 0)
	{
		if(lnbr < 0)
			lnbr = lnbr * -1;
		if(lnbr > 0)
		{
			ft_putnbr_base(lnbr / base_l, base);
			return (base[lnbr % base_l]);
		}
	}
	return (0);
}
int	ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int nb;
	int base_l;

	base_l = base_is_valid(base);
	i = 0;
	sign = 1;
	nb = 0;
	if(base_l > 1)
	{
		while(check_isspace(str[i]))
			i++;
		while(str[i] == '+' || str[i] == '-')
		{
			if(str[i] == '-')
				sign *= -1;
			i++;
		}
		while(str[i] != '\0')
		{
			nb = nb * base_l + ft_index(base, str[i]);
			i++;
		}
	}
	nb *= sign;
	return (nb);
}
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	base_l;
	long lnb;

	(void) base_to;
	base_l = base_is_valid(base_from);
	if(base_l != 0)
	{
		lnb = ft_atoi_base(nbr, base_from);
		lnb = ft_atoi_base(lnb, base_to);
		printf("%ld", lnb);
	}
	return (0);
}

int main(void)
{
    char *base_from = "0123456789ABCDEF";
    char *base_to = "01";
    char *nbr = "ABCD34";
    nbr = ft_convert_base(nbr,base_from,base_to);
    //printf("%s\n",nbr);
    return (0);
}
