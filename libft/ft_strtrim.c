/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 08:50:07 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/11 12:16:41 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		a;
	int		b;

	a = 0;
	if (!s)
		return (0);
	b = ft_strlen((char *)(s)) - 1;
	while ((s[a] == ' ') || (s[a] == '\t') || (s[a] == '\n'))
		a++;
	while ((s[b] == ' ') || (s[b] == '\t') || (s[b] == '\n'))
	{
		if (b == 0)
			return ((char *)ft_memalloc(sizeof(char)));
		b--;
	}
	return (ft_strsub(s, a, b - a + 1));
}
