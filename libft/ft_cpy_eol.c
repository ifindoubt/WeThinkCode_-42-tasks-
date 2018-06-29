/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpy_eol.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 02:11:40 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/27 04:14:36 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_cpy_eol(char **dst, char *src, char c)
{
	size_t		a;
	size_t		cnt;
	size_t		pstn;

	a = -1;
	cnt = 0;
	while (src[++a])
		if (src[a] == c)
			break ;
	pstn = a;
	if (!(*dst = ft_strnew(a)))
		return (0);
	while (src[cnt] && cnt < a)
	{
		if (!(*dst = ft_strjoin2(*dst, src[cnt])))
			return (0);
		cnt++;
	}
	return (pstn);
}
