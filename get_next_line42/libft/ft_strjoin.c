/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/26 18:44:44 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/27 17:25:01 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lenght1;
	int		lenght2;
	char	*new;
	int		i;

	lenght1 = ft_strlen(s1);
	lenght2 = ft_strlen(s2);
	new = (char*)malloc(sizeof(char) * (lenght1 + lenght2 + 1));
	if (new)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			new[i] = s1[i];
			i++;
		}
		while (s2[i - lenght1] != '\0')
		{
			new[i] = s2[i - lenght1];
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
