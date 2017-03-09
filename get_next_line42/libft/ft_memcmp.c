/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:43:52 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/01 21:02:30 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			j;

	j = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (j < n && str1[j] == str2[j])
		j++;
	if (j < n)
		return ((int)str1[j] - (int)str2[j]);
	return (0);
}
