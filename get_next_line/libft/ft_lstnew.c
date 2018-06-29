/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 01:43:55 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/29 04:47:54 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*list;

	if (!(list = (t_list *)malloc(sizeof(*list))))
	{
		return (NULL);
	}
	if (!content)
	{
		free((list->content = NULL));
		free((void *)(list->content_size = 0));
	}
	else
	{
		if (!(list->content = malloc(sizeof(content_size))))
			return (NULL);
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	free((void *)(list->next = NULL));
	return (list);
}
