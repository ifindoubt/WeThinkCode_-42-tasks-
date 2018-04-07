/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 17:15:42 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/25 17:15:46 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define EVEN(nbr) (!(nbr % 2))
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG "Even number of arguments\n"
# define ODD_MSG "Odd number of arguments\n"

#endif