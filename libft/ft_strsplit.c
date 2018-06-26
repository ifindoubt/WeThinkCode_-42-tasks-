/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 04:09:54 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/11 10:15:52 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**trgt;
	int		ss_w;
	int		b;

	if (!s)
		return (0);
	ss_w = ft_count_w(s, c);
	if (!(trgt = (char **)malloc(sizeof(*trgt) * (ss_w + 1))))
		return (0);
	b = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			trgt[b] = ft_gnw(s, c);
			b++;
			while (*s && (*s != c))
				s++;
		}
	}
	trgt[b] = 0;
	return (trgt);
}
