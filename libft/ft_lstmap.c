/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 12:27:49 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/12 22:06:28 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*a_lst;
	t_list	*lnk;
	t_list	*basic;

	if (!lst || !f)
		return (0);
	lnk = f(lst);
	a_lst = ft_lstnew(lnk->content, lnk->content_size);
	basic = a_lst;
	lst = lst->next;
	while (lst)
	{
		lnk = f(lst);
		basic->next = ft_lstnew(lnk->content, lnk->content);
		lst = lst->next;
		basic = basic->next;
	}
	return (a_lst);
}
