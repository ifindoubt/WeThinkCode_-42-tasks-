/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 18:32:43 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/18 18:32:47 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

intft_recursive_power(int nb, int power);

intft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
	{
		return (nb);
	}
}
