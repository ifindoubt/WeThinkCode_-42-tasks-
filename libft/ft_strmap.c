/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 08:24:41 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/11 12:11:36 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ss;
	int		a;

	if (!s)
		return (0);
	if (!(ss = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	a = 0;
	while (*s)
	{
		ss[a++] = (*f)(*s);
		s++;
	}
	ss[a] = 0;
	return (ss);
}
