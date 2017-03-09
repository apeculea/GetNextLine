/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/18 17:56:25 by exam              #+#    #+#             */
/*   Updated: 2017/02/01 19:06:08 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

long	ft_modulo(int nbr)
{
	long	nbr2;

	nbr2 = nbr;
	if (nbr < 0)
		return (-nbr2);
	return (nbr);
}

int		ft_nrcif(long aux)
{
	int		i;

	i = 0;
	if (aux == 0)
		i = 1;
	while (aux > 0)
	{
		aux /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	aux;
	char	*str;
	int		nrcif;

	aux = ft_modulo(n);
	nrcif = ft_nrcif(aux);
	if (n < 0)
		nrcif++;
	str = (char*)malloc(sizeof(char) * (nrcif + 1));
	if (!str)
		return (NULL);
	str[nrcif] = '\0';
	nrcif--;
	while (nrcif >= 0)
	{
		str[nrcif--] = aux % 10 + '0';
		aux /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
