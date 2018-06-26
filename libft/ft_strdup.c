/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 00:24:26 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/08 19:52:05 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ns1;
	int		a;

	a = ft_strlen(s1);
	a++;
	ns1 = (char *)malloc(sizeof(char) * a);
	if (ns1 == 0)
		return (0);
	ft_strcpy(ns1, s1);
	return (ns1);
}
