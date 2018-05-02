/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 20:44:16 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/04/30 20:49:30 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'm' - (str[i] - 'n');
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'M' - (str[i] - 'N');
		}
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
