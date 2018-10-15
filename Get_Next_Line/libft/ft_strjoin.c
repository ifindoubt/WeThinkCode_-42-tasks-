/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 05:42:54 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/11 12:15:02 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*jn;
	int		a;

	a = 0;
	if (!s1 || !s2)
		return (0);
	if (!(jn = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	while (*s1)
		jn[a++] = *s1++;
	while (*s2)
		jn[a++] = *s2++;
	jn[a] = '\0';
	return (jn);
}
