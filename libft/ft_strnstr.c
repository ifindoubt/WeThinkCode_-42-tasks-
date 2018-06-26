/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 02:20:06 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/08 08:21:38 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t len)
{
	size_t	a;
	size_t	b;
	size_t	n_len;

	a = 0;
	n_len = ft_strlen(ned);
	if (n_len == 0)
		return ((char *)hay);
	while (hay[a] && (a < len))
	{
		b = 0;
		while (hay[a + b] == ned[b])
		{
			if ((b == n_len - 1) && (a + b < len))
				return ((char *)hay + a);
			b++;
		}
		a++;
	}
	return (0);
}
