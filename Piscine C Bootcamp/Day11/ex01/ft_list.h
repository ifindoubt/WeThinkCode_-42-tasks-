/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:36:04 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/28 17:47:00 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef	struct	s_list
{
	struct s_list	*next;
	void	*data;
}
t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void * data);
#endif
