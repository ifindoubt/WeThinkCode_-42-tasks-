/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 17:47:38 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/17 17:49:40 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c);
void    print_top(int x)
{
    int i;
    i = 0;
    while (i < x)
    {
        i++;
        if (i == 1)
        {
            ft_putchar('A');
        }
        else if (i == x)
        {
            ft_putchar('C');
        }
        else
        {
            ft_putchar('B');
        }
    }
}
void    print_middle(int x, int y)
{
    int j;
    int k;
    j = 0;
    while (j < y)
    {
        k = 0;
        ft_putchar('\n');
        while (k < x)
        {
            k++;
            if (k == 1)
                ft_putchar('B');
            else if (k == x)
                ft_putchar('B');
            else
                ft_putchar(' ');
        }
        j++;
    }
}
void    print_bottom(int x)
{
    int i;
    i = 0;
    ft_putchar('\n');
    while (i < x)
    {
        i++;
        if (i == 1)
        {
            ft_putchar('C');
        }
        else if (i == x)
        {
            ft_putchar('A');
        }
        else
        {
            ft_putchar('B');
        }
    }
}
void    rush(int x, int y)
{
    if (x > 200 && y > 200)
    {
        write(1, "You have gone over the limit.", 29);
    }
    if (x <= 200 && x > 0 && y <= 200 && y > 0)
    {
        if (y == 1)
            print_top(x);
        else if (x == 2)
        {
            print_top(x);
            print_bottom(x);
        }
        else
        {
            print_top(x);
            print_middle(x, y - 2);
            print_bottom(x);
        }
        ft_putchar('\n');
    }
    else
        write(1, "Error 404: correct input not found.", 35);
}


