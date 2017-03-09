/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 21:00:28 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/01 21:00:31 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	int		k;

	i = 0;
	if (ft_strlen((char*)little) == 0 && ft_strlen((char*)big) == 0)
		return (big);
	if (ft_strlen((char*)big) == 0)
		return (NULL);
	k = ft_strlen((char*)little);
	if (k == 0)
		return (big);
	while (big[i] != '\0' && i + k <= len)
	{
		if (ft_strcmp(ft_strsub(big, i, k), little) == 0)
			return (big + i);
		i++;
	}
	return (0);
}
