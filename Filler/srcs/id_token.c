/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   id_token.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 23:30:33 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/08/27 07:03:23 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		id_token(t_filler *f_system, char *line)
{
	int		a;
	int		b;

	a = 6;
	b = 0;
	f_system->y_token = ft_atoi(&line[6]);
	while (ft_isdigit(line[a]))
		a++;
	a++;
	f_system->x_token = ft_atoi(&line[a]);
	if (!f_system->spot)
		if (!(f_system->spot = ft_strnew_grid(f_system->y_token,
						f_system->x_token)))
			return (-1);
	while (b < f_system->y_token)
	{
		get_next_line(0, &line);
		f_system->spot[b] = ft_strdup(line);
		b++;
	}
	return (0);
}
