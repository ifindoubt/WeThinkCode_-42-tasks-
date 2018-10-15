/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 10:14:19 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/08/21 17:48:18 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	moves(t_filler *f_system)
{
	int	a;
	int	b;

	a = 0;
	f_system->player2 = (f_system->player1 == 79) ? 88 : 79;
	while (a < f_system->y_map)
	{
		b = 0;
		while (b < f_system->x_map)
		{
			if (f_system->map[a][b] == f_system->player2)
			{
				f_system->p2_pos_x = b;
				f_system->p2_pos_y = a;
			}
			if (f_system->map[a][b] == f_system->player1)
			{
				f_system->p1_pos_x = b;
				f_system->p1_pos_y = a;
			}
			b++;
		}
		a++;
	}
	f_system->news_nbr = (f_system->p1_pos_y < f_system->p2_pos_y) ? 0 : 1;
}
