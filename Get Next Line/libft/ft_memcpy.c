/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 19:47:21 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/06 13:39:34 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*nsrc;
	unsigned char	*ndst;
	size_t			a;

	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	a = 0;
	while (a < n)
	{
		ndst[a] = nsrc[a];
		a++;
	}
	return (dst);
}
