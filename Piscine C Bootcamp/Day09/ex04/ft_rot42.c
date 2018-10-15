/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 11:08:00 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/23 14:06:35 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rot42(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
	{
		if (str[a] > 64 && str[i] < 91)
		{
			str[a] = str[a] - 65;
			str[a] = ((str[a] + 42) % 26);
			str[a] = str[a] + 65;
		}
		else if (str[a] > 96 && str[a] < 123)
		{
			str[a] = str[a] - 97;
			str[a] = ((str[a] + 42) % 26);
			str[a] = str[a] + 97;
		}
		a++;
	}
	return (str);
}