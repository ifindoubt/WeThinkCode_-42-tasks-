/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 19:25:23 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/06 09:13:32 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*nsrc;
	unsigned char	*ndst;
	size_t			b;

	nsrc = (unsigned char *)src;
	ndst = (unsigned char *)dst;
	b = 0;
	if (nsrc < ndst)
		while (len--)
			ndst[len] = nsrc[len];
	else
		ft_memcpy(ndst, nsrc, len);
	return (dst);
}
