/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:43:56 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/27 16:13:09 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;
	unsigned char *cop;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	cop = (unsigned char *)malloc(len);
	if (cop)
	{
		ft_memcpy(cop, src, len);
		ft_memcpy(dst, cop, len);
		free(cop);
	}
	return (d);
}
