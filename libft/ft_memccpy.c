/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 19:47:21 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/07 06:41:25 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		*(unsigned char	*)(dst + a) = *(unsigned char*)(src + a);
		if (*(unsigned char*)(src + a) == (unsigned char)c)
			return (dst + a + 1);
		a++;
	}
	return (0);
}
