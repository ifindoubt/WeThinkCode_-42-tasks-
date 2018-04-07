/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 18:38:17 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/18 18:38:20 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_find_next_prime(int nb);
int ft_is_prime(int nb);

int ft_is_prime(int nb)
{
	int i;
	int prim;

	a = 9;
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
		return (prim);
	}
}

int ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	else
	{
		while (!(ft_is_prime(nb)))
		{
			nb++;
		}
		return (nb);
	}
}

int main(void)
{
	/*Test cases
	 */
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(9));
	printf("%d\n", ft_find_next_prime(21));
	printf("%d\n", ft_find_next_prime(25));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(64));
	return (0);
}
