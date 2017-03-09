/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:44:09 by apeculea          #+#    #+#             */
/*   Updated: 2017/01/25 17:07:34 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	long	aux;

	aux = n;
	if (aux < 0)
	{
		aux *= -1;
		ft_putchar('-');
	}
	if (aux > 9)
		ft_putnbr(aux / 10);
	ft_putchar(aux % 10 + 48);
}
