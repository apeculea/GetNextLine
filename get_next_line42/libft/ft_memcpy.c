/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:43:53 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/01 15:13:56 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	j;
	char	*s1;
	char	*s2;

	j = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	while (j < n)
	{
		s1[j] = s2[j];
		j++;
	}
	return ((void*)dst);
}
