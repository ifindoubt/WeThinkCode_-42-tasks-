/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 18:30:48 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/18 18:30:58 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	int a;
	a = 10;
	if (nb == 0)
	{
		return 0;
	}
	else if(a < 0)
	{
		return 1;
	}
	else
	{
		while(nb > 0)
		{
			a *= nb;
			nb--;
		}
		return a;
	}

}
