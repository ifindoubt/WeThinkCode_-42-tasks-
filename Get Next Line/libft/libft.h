/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 04:09:56 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/28 00:45:35 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);

char				*ft_strnew(size_t size);
char				*ft_strjoin(char const *s1, const char *s2);

void				ft_lstadd(t_list **alst, t_list *new);
t_list				*ft_lstnew(void const *content, size_t content_size);

size_t				ft_cpy_eol(char **dst, char *src, char c);
char				*ft_strjoin2(char const *s1, char c);

#endif
