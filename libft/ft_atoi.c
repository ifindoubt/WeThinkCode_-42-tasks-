/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:33:30 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/08 15:16:55 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	num;
	int		lng;
	int		a;

	num = 0;
	a = 1;
	lng = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\r') || (*str == '\f')
			|| (*str == '\v') || (*str == '\n'))
		str++;
	if (*str == '-')
		a = -1;
	if ((*str == '-') || (*str == '+'))
		str++;
	while ((*str >= '0') && (*str <= '9'))
	{
		num *= 10;
		num += ((int)*str - 48);
		str++;
		lng++;
	}
	if (lng > 19)
		return ((a > 0) ? -1 : 0);
	return (num * a);
}
