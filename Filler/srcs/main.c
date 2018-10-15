/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 20:59:14 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/08/27 07:04:59 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		main(void)
{
	char		*field;
	t_filler	*game;

	if (!(game = ft_memalloc(sizeof(t_filler))))
		return (-1);
	get_next_line(0, &field);
	game->player1 = (ft_atoi(field + 10) == 1) ? 79 : 88;
	while (72)
	{
		get_next_line(0, &field);
		game->y_map = ft_atoi(&field[8]);
		game->x_map = ft_atoi(&field[11]);
		init_map(game);
		if (filler_news(game) == 0)
			game->ko = 1;
		place_p(game);
		if (game->end == 1)
			break ;
	}
	free(game);
	return (0);
}
