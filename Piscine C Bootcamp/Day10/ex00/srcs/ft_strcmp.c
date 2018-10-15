/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:49:39 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/27 12:40:40 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int len1;
	int len2;
	int a;

	len1 = ft_find_len(s1);
	len2 = ft_find_len(s2);
	a = len1 - len2;
	return (a);
}
