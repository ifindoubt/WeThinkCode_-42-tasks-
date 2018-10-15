/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:26:16 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/28 17:26:22 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *a;

	a = NULL;
	a = malloc(sizeof(t_list));
	a->data = data;
	a->next = NULL;
	return (a);
}
