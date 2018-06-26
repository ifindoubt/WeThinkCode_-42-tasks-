/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 12:05:42 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/11 17:22:49 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*a_lst;

	if (!(a_lst = (t_list *)malloc(sizeof(t_list))))
		return (0);
	if (content)
	{
		if (!(a_lst->content = ft_memalloc(content_size)))
			return (0);
		ft_memcpy(a_lst->content, content, content_size);
		a_lst->content_size = content_size;
	}
	else
	{
		a_lst->content = 0;
		a_lst->content_size = 0;
	}
	a_lst->next = 0;
	return (a_lst);
}
