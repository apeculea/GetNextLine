/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:43:48 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/01 16:29:30 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			j;
	unsigned char	*s1;
	unsigned char	*s2;

	j = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (j < n)
	{
		s1[j] = s2[j];
		j++;
		if (s1[j - 1] == (unsigned char)c)
			return (dst + j);
	}
	return (NULL);
}
