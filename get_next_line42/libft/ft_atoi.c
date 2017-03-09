/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:43:08 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/04 18:45:10 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	long	aux;
	int		ok;

	i = 0;
	aux = 0;
	ok = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			ok = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		aux = aux * 10 + str[i] - 48;
		i++;
	}
	if (ok)
		return (-aux);
	else
		return (aux);
}
