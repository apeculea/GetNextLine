/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 19:32:32 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/01 19:38:29 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str(const char *s, char c, int k)
{
	char	*str;
	int		count;

	count = 0;
	str = (char*)malloc(sizeof(char) * ft_letter(s, c, k) + 1);
	if (str == NULL)
		return (NULL);
	while (s[k] != c && s[k] != '\0')
		str[count++] = s[k++];
	str[count] = '\0';
	return (str);
}
