/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:44:27 by apeculea          #+#    #+#             */
/*   Updated: 2017/01/30 18:20:31 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;
	int	k1;
	int	k2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	k1 = ft_strlen(s1);
	k2 = ft_strlen(s2);
	if (k1 > k2)
		i = k1;
	else
		i = k2;
	while (i > 0)
	{
		if (s1[i] != s2[i])
			return (0);
		i--;
	}
	return (1);
}
