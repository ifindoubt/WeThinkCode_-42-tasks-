/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:38:28 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/08/21 17:19:57 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	place_p(t_filler *f_system)
{
	if (f_system->news_nbr == 0)
		f_system->news_nbr = 3;
	else if (f_system->news_nbr == 1)
		f_system->news_nbr = 2;
	else if (f_system->news_nbr == 2)
		f_system->news_nbr = 1;
	else if (f_system->news_nbr == 3)
		f_system->news_nbr = 0;
	if (f_system->ko == 1)
	{
		f_system->end = 1;
		ft_putnbr(f_system->move_y);
		ft_putchar(32);
		ft_putnbr(f_system->move_x);
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(f_system->move_y);
		ft_putchar(32);
		ft_putnbr(f_system->move_x);
		ft_putchar('\n');
	}
}
