/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 02:30:41 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/08/21 17:36:08 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/libft.h"

typedef struct	s_filler
{
	char		player1;
	char		player2;
	int			x_map;
	int			y_map;
	char		**map;
	int			x_token;
	int			y_token;
	char		**spot;
	int			p1_pos_x;
	int			p1_pos_y;
	int			p2_pos_x;
	int			p2_pos_y;
	int			move_x;
	int			move_y;
	int			news_nbr;
	int			ko;
	int			end;
}				t_filler;

int				check_token(t_filler *f_system, int a, int b);
void			place_p(t_filler *f_system);
int				init_map(t_filler *f_system);

int				id_token(t_filler *f_system, char *line);
int				filler_news(t_filler *f_system);

void			moves(t_filler *f_system);

#endif
