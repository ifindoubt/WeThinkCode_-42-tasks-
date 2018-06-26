/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnw.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 06:41:10 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/06 12:35:59 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_gnw(const char *s, char c)
{
	size_t	ss;
	char	*w;
	int		a;

	a = 0;
	ss = ft_strlen(s);
	if (!s)
		return (0);
	if (!(w = (char *)malloc(sizeof(ss + 1))))
		return (0);
	while (*s && (*s != c))
		w[a++] = *s++;
	w[a] = '\0';
	return (w);
}
