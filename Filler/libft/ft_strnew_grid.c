/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 23:48:53 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/08/21 17:47:07 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strnew_grid(size_t x, size_t y)
{
	char	**line;
	char	*line_2;
	size_t	a;

	line = (char **)malloc(sizeof(char *) * y);
	line_2 = (char *)malloc(sizeof(char) * x * y);
	a = 0;
	while (a < y)
	{
		line[a] = &line_2[a * x];
		a++;
	}
	return (line);
}
