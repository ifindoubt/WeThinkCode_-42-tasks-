/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 08:24:41 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/11 12:11:54 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ss;
	unsigned int	a;

	a = 0;
	if (!s)
		return (0);
	if (!(ss = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	while (s[a])
	{
		ss[a] = (*f)(a, s[a]);
		a++;
	}
	ss[a] = '\0';
	return (ss);
}
