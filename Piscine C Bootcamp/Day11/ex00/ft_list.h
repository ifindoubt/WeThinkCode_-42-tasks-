/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:15:37 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/28 17:46:39 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

type	struct	s_list
{
	struct s_list	*next;
	void	*data;
}
t_list	*ft_create_elem(void *data);

#endif
