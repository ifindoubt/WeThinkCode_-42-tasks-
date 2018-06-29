/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 02:14:04 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/27 04:09:48 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin2(char const *s1, char c)
{
	char	*ns1;
	size_t	a;
	size_t	s1_len;

	if (!s1 || !c)
		return (0);
	s1_len = ft_strlen(s1);
	ns1 = ft_strnew(s1_len + 1);
	if (!ns1)
		return (0);
	a = -1;
	while (++a < s1_len)
		*(ns1 + a) = *(s1 + a);
	*(ns1 + a) = c;
	return (ns1);
}
