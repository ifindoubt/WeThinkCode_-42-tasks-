/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_token.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 23:32:13 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/08/27 07:13:23 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

static int		piece_split(t_filler *f_system, int a, int b)
{
	int		x;
	int		y;
	int		temp_pos;

	temp_pos = 0;
	x = 0;
	while (x < f_system->y_token)
	{
		y = 0;
		while (y < f_system->x_token)
		{
			if ((f_system->map[a + x][b + y] == f_system->player1 ||
						f_system->map[a + x][b + y] == f_system->player1 + 32)
					&& f_system->spot[x][y] == '*')
				temp_pos++;
			if ((f_system->map[a + x][b + y] == f_system->player2 ||
						f_system->map[a + x][b + y] == f_system->player2 + 32)
					&& f_system->spot[x][y] == '*')
				return (0);
			y++;
		}
		x++;
	}
	return ((temp_pos == 1) ? 1 : 0);
}

int				check_token(t_filler *f_system, int a, int b)
{
	if (a + f_system->y_token > f_system->y_map)
		return (0);
	else if (b + f_system->x_token > f_system->x_map)
		return (0);
	else
		return (piece_split(f_system, a, b));
}
