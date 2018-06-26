/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 01:25:03 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/08 19:29:55 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ndst;
	size_t	a;
	size_t	nsrc;

	ndst = (size_t)ft_strlen((char *)dst);
	a = ndst;
	nsrc = (size_t)ft_strlen((char *)src);
	while ((*src) && ((ndst + 1) < dstsize))
		dst[ndst++] = *src++;
	dst[ndst] = '\0';
	if (a > dstsize)
		return (nsrc + dstsize);
	else
		return (nsrc + a);
}
