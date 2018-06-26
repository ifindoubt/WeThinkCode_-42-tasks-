/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 22:34:44 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/11 12:14:41 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	b;

	if (s)
	{
		b = 0;
		if (!(a = (char *)malloc(sizeof(*s) * (len + 1))))
			return (0);
		while (s[start] && (len-- > 0))
			a[b++] = s[start++];
		a[b] = '\0';
		return (a);
	}
	return (0);
}
