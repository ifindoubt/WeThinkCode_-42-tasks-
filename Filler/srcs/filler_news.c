/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler_news.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 23:27:31 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/08/27 07:04:47 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

static int		up_right(t_filler *f_system)
{
	int		a;
	int		b;

	a = 0;
	while (a < f_system->y_map)
	{
		b = f_system->x_map;
		while (b > 0)
		{
			if (check_token(f_system, a, b) == 1)
			{
				f_system->move_x = b;
				f_system->move_y = a;
				return (1);
			}
			b--;
		}
		a++;
	}
	return (0);
}

static int		down_right(t_filler *f_system)
{
	int		a;
	int		b;

	a = f_system->y_map;
	while (a > 0)
	{
		b = f_system->x_map;
		while (b > 0)
		{
			if (check_token(f_system, a, b) == 1)
			{
				f_system->move_x = b;
				f_system->move_y = a;
				return (1);
			}
			b--;
		}
		a--;
	}
	return (0);
}

static int		down_left(t_filler *f_system)
{
	int		a;
	int		b;

	a = f_system->y_map;
	while (a > 0)
	{
		b = 0;
		while (b < f_system->x_map)
		{
			if (check_token(f_system, a, b) == 1)
			{
				f_system->move_x = b;
				f_system->move_y = a;
				return (1);
			}
			b++;
		}
		a--;
	}
	return (0);
}

static int		up_left(t_filler *f_system)
{
	int		a;
	int		b;

	a = 0;
	while (a < f_system->y_map)
	{
		b = 0;
		while (b < f_system->x_map)
		{
			if (check_token(f_system, a, b) == 1)
			{
				f_system->move_x = b;
				f_system->move_y = a;
				return (1);
			}
			b++;
		}
		a++;
	}
	return (0);
}

int				filler_news(t_filler *f_system)
{
	if (f_system->news_nbr == 0)
		return (up_left(f_system));
	else if (f_system->news_nbr == 1)
		return (down_right(f_system));
	else if (f_system->news_nbr == 2)
		return (up_right(f_system));
	else if (f_system->news_nbr == 3)
		return (down_left(f_system));
	else
		return (0);
}
