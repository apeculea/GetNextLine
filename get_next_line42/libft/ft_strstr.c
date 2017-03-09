/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:44:51 by apeculea          #+#    #+#             */
/*   Updated: 2017/01/25 17:20:24 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	char	*s1;
	char	*s2;

	if (!*to_find)
		return ((void *)str);
	while (*str)
	{
		if (*str == *to_find)
		{
			s1 = (void *)str + 1;
			s2 = (void *)to_find + 1;
			while (*s1 && *s2 && *s1 == *s2)
			{
				++s1;
				++s2;
			}
			if (!*s2)
				return ((void *)str);
		}
		str++;
	}
	return (NULL);
}
