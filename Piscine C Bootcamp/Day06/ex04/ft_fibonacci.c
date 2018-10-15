/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 18:33:15 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/18 18:33:20 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_fibonacci(int index);

int ft_fibonacci(int index)
{
	if (index < 0)
	{
		return -1;
	}
	else if (index <= 1)
	{
		return index;
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
