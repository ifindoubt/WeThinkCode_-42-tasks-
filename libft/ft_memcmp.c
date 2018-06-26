/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 19:10:55 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/07 08:27:21 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;

	if ((s1 == s2) || (n == 0))
		return (0);
	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	while (n--)
	{
		if (*a != *b)
			return (*a - *b);
		if (n)
		{
			a++;
			b++;
		}
	}
	return (0);
}
