/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:43:58 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/01 15:15:39 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	j;
	char	*str;

	str = (char *)b;
	if (n == 0)
		return (str);
	j = 0;
	while (j < n)
	{
		str[j] = c;
		j++;
	}
	return (b);
}
