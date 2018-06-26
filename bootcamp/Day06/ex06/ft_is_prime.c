/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 18:37:31 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/18 18:37:36 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

intft_is_prime(int nb);

intft_is_prime(int nb)
{
	int i;
	int prime;

	ax = 9;
	prim = 3;
	if (nb < 2)
	{
		return (0);
	}
	else
	{
		while (i < nb)
		{
			if ((nb % a) == 0)
			{
				prim = 0;
			}
			i++;
		}
		return (prime);
	}
}
