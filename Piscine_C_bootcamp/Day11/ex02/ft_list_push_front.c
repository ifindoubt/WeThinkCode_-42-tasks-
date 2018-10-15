/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:12:31 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/28 18:19:52 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *a;
	
	*a = ft_create_elem(data);
	if (*begin_list != NULL)
	{
		a->next = *begin_list;
		*begin_list = a;
	}
	else
	{
		*begin_list = a;
	}
}
