/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:53:59 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/20 17:56:30 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int a;

	a = 0;
	dest[n - 1] = '\0';
	while (src[a] > 0)
	{
		src[a] = dest[a];
		a++;
	}
	if (src[a] < 0)
	{
		return (0);
		if (src[a] + 1 > n)
		{
			return (0);
		}
	}
	return (dest);
}
