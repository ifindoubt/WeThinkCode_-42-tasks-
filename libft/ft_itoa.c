/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 05:17:05 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/08 16:09:40 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		ooz;
	int		a;
	char	*str;

	a = ft_isneg(n);
	ooz = ft_ooz(n);
	str = (char *)malloc(sizeof(char) * ooz + 1);
	if (!str)
		return (0);
	str[ooz] = '\0';
	ooz--;
	while (ooz >= 0)
	{
		str[ooz] = 48 + ft_abs(n % 10);
		n = ft_abs(n / 10);
		ooz--;
	}
	if (a == -1)
		str[0] = '-';
	return (str);
}
