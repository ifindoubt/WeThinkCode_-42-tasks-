/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 01:56:20 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/08 08:07:49 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ss;
	int			a;

	a = 0;
	ss = 0;
	while (s[a])
	{
		if (s[a] == c)
			ss = s + a;
		a++;
	}
	if (s[a] == c)
		return ((char *)(s + a));
	return ((char *)ss);
}
