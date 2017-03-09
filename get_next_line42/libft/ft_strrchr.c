/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:44:50 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/01 21:05:04 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		found;
	int		last;
	char	ch;

	i = 0;
	last = 0;
	ch = c;
	found = 0;
	while (i <= (int)ft_strlen(str))
	{
		if (str[i] == ch)
		{
			found = 1;
			last = i;
		}
		i++;
	}
	if (found == 1)
		return ((char*)str + last);
	return (NULL);
}
