/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 18:22:32 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/22 19:44:33 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int b;

	b = (ft_strlen(src)) + 1;
	if ((ft_strlen(src)) == '\0')
	{
		return (0);
	}
	while (ft_strlen(src) >= 0)
	{
		if (b != '\0' && b < 100 && b > 0)
		{
			malloc(sizeof(b));
			return (b);
		
	}
}

int		ft_strlen(char *src)
{
	int a;

	if (src[a] == 0)
	{
		return (0);
	}
	while (src[a] != '\0')
	{
		a++;
	}
	return (a);
}
