/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 10:06:31 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/08/27 07:03:59 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		init_map(t_filler *f_system)
{
	char	*line;
	int		a;

	a = 0;
	if (!f_system->map)
		if (!(f_system->map = ft_strnew_grid(f_system->y_map,
						f_system->x_map)))
			return (-1);
	get_next_line(0, &line);
	while (a <= f_system->y_map)
	{
		get_next_line(0, &line);
		if (ft_isdigit(line[0]))
			f_system->map[a] = ft_strdup(line + 4);
		else
			id_token(f_system, line);
		a++;
	}
	if (f_system->p1_pos_x == 0 && f_system->p1_pos_y == 0 &&
			f_system->p2_pos_x == 0 && f_system->p2_pos_y == 0)
		moves(f_system);
	return (0);
}
