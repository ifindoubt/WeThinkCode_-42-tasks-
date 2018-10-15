/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 23:48:15 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/08/21 17:47:27 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

# define BUFF_SIZE 9999

typedef struct		s_gnl
{
	char			*look;
	char			*use;
	struct s_gnl	*next;
	int				fd;
}					t_gnl;

void				ft_bzero(void *s, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strchr(const char *s, int c);
int					ft_atoi(const char *str);
int					ft_isdigit(int c);

void				*ft_memalloc(size_t size);
char				*ft_strnew(size_t size);
char				*ft_strjoin(char const *s1, const char *s2);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);

int					get_next_line(const int fd, char **line);

char				**ft_strnew_grid(size_t x, size_t y);

#endif
