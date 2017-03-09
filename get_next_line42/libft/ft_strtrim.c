/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 17:12:26 by apeculea          #+#    #+#             */
/*   Updated: 2017/01/30 20:04:12 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*result;
	int		count;
	int		start;
	int		end;

	if (s == NULL)
		return (NULL);
	count = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t' || s[end] == '\0')
			&& (end > 0))
		end--;
	result = (char*)malloc(sizeof(char) * (end - start) + 2);
	if (start >= (int)ft_strlen(s))
		return (ft_strdup(""));
	if (result == NULL)
		return (NULL);
	while (start <= end)
		result[count++] = s[start++];
	result[count] = '\0';
	return (result);
}
