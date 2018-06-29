/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 00:50:26 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/29 04:52:58 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list			*vld_file(t_list **file, int fd)
{
	t_list				*a_lst;

	a_lst = *file;
	while (a_lst)
	{
		if ((int)a_lst->content_size == fd)
			return (a_lst);
		a_lst = a_lst->next;
	}
	a_lst = ft_lstnew("\0", fd);
	ft_lstadd(file, a_lst);
	a_lst = *file;
	return (a_lst);
}

int						get_next_line(const int fd, char **line)
{
	char				buff[BUFF_SIZE + 1];
	static t_list		*file;
	size_t				a;
	t_list				*crnt_a_lst;
	size_t				ans;

	if ((fd < 0 || line == 0 || read(fd, buff, 0) < 0))
		return (-1);
	crnt_a_lst = vld_file(&file, fd);
	ERR_CHECK((*line = ft_strnew(1)));
	while ((ans = read(fd, buff, BUFF_SIZE)))
	{
		buff[ans] = '\0';
		ERR_CHECK((crnt_a_lst->content =
					ft_strjoin(crnt_a_lst->content, buff)));
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (ans < BUFF_SIZE && !ft_strlen(crnt_a_lst->content))
		return (0);
	a = ft_cpy_eol(line, crnt_a_lst->content, '\n');
	(a < (size_t)ft_strlen(crnt_a_lst->content))
		? crnt_a_lst->content += (a + 1) : ft_strclr(crnt_a_lst->content);
	return (1);
}
