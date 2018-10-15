/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 02:24:47 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/08/21 17:41:59 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem_ndd;

	if (!(mem_ndd = (void *)malloc(sizeof(void *) * size)))
		return (0);
	ft_bzero(mem_ndd, size);
	return (mem_ndd);
}
