/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 20:34:21 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/01 20:35:27 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(unsigned int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
