/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:43:15 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/08 21:16:55 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*b;
	size_t			d;

	a = (unsigned char)c;
	b = (unsigned char *)s;
	d = 0;
	while (n--)
	{
		if (b[d] == a)
			return ((void *)&b[d]);
		d++;
	}
	return (0);
}
