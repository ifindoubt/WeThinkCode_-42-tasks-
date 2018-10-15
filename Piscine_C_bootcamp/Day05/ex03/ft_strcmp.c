/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:36:35 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/20 18:36:54 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_len(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

int	ft_strcmp(char *s1, char *s2)
{
	int len1;
	int len2;
	int ans;

	len1 = ft_find_len(s1);
	len2 = ft_find_len(s2);
	ans = len1 - len2;
	return ans;
}
