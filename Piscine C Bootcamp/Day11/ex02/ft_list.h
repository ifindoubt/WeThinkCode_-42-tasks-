/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:00:56 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/28 18:09:14 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct	s_list
{
	struct s_list	*next;
	void	*data
}
t_list;
ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_create_elem(void *data);

#endif