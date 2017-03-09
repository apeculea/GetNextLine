/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 17:10:52 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/01 19:35:12 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		wordcount(const char *s, char c)
{
	int		count;
	int		words;

	count = 0;
	words = 0;
	while (s[count] != '\0')
	{
		if (s[count] != c)
		{
			words++;
			while (s[count] != c)
				count++;
		}
		count++;
	}
	return (words);
}

static int		find(const char *s, char c, int loc)
{
	while (s[loc] == c && s[loc] != '\0')
		loc++;
	if (s[loc] != '\0')
		return (loc);
	return (-1);
}

char			**ft_strsplit(const char *s, char c)
{
	int		row;
	int		count;
	char	**result;

	if (s == NULL)
		return (NULL);
	count = find(s, c, 0);
	row = 0;
	result = (char**)malloc(sizeof(char*) * wordcount(s, c) + 1);
	if (result == NULL)
		return (NULL);
	while (count != -1)
	{
		result[row] = ft_str(s, c, count);
		row++;
		count = count + ft_letter(s, c, count);
		count = find(s, c, count);
	}
	result[row] = NULL;
	return (result);
}
