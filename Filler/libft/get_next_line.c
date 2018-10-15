/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:55:08 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/08/27 07:02:55 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_list_inc(t_gnl **store, t_gnl *block)
{
	t_gnl *a_list;

	a_list = *store;
	while (a_list->next != 0)
		a_list = a_list->next;
	a_list->next = block;
}

static t_gnl	*ft_format(int fd)
{
	t_gnl *a_list;

	if (!(a_list = (t_gnl*)malloc(sizeof(*a_list))))
		return (0);
	a_list->fd = fd;
	a_list->use = ft_strnew(0);
	a_list->look = 0;
	a_list->next = 0;
	return (a_list);
}

static t_gnl	*ft_determine(t_gnl *store, int fd)
{
	t_gnl	*a_list;
	t_gnl	*temp;

	temp = 0;
	a_list = store;
	while (a_list)
	{
		if (a_list->fd == fd)
			return (a_list);
		if (!(a_list->next))
		{
			temp = ft_format(fd);
			ft_list_inc(&a_list, temp);
			return (temp);
		}
		a_list = a_list->next;
	}
	return (0);
}

static int		ft_test(char *store, char **line)
{
	char	*end;

	if (!store)
		return (0);
	end = ft_strchr(store, '\n');
	if (end != 0)
	{
		*end = 0;
		*line = ft_strdup(store);
		ft_strncpy(store, &end[1], ft_strlen(&end[1]) + 1);
		return (1);
	}
	else if (ft_strlen(store) > 0)
	{
		*line = ft_strdup(store);
		*store = 0;
		return (1);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	char			buffer[BUFF_SIZE + 1];
	int				result;
	static t_gnl	*store = 0;
	t_gnl			*temp;

	if (!(store))
		store = ft_format(fd);
	if (BUFF_SIZE <= 0 || fd == -1 || line == 0)
		return (-1);
	temp = ft_determine(store, fd);
	while (!(ft_strchr(temp->use, '\n')))
	{
		result = read(fd, buffer, BUFF_SIZE);
		if (result == -1)
			return (-1);
		if (result == 0)
			return (ft_test(temp->look, line));
		buffer[result] = '\0';
		temp->look = ft_strjoin(temp->use, buffer);
		free(temp->use);
		temp->use = temp->look;
	}
	return (ft_test(temp->look, line));
}
