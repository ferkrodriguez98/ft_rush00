/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstoute <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 01:50:44 by bstoute           #+#    #+#             */
/*   Updated: 2018/01/14 04:59:16 by bstoute          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	first_line(int x)
{
	if (x == 0)
		return (0);
	if (x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	if (x > 1)
	{
		ft_putchar('A');
		while (x - 2 > 0)
		{
			ft_putchar('B');
			x--;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
	return (0);
}

int	middle_line(int x)
{
	if (x == 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
	if (x > 1)
	{
		while (x - 2 >= 0)
		{
			ft_putchar('B');
			while (x - 2 >= 1)
			{
				ft_putchar(' ');
				x--;
			}
			ft_putchar('B');
			x--;
			ft_putchar('\n');
		}
		return (0);
	}
	return (0);
}

int	last_line(int x)
{
	if (x == 0)
		return (0);
	if (x == 1)
		ft_putchar('C');
	if (x > 1)
	{
		ft_putchar('C');
		while (x - 2 > 0)
		{
			ft_putchar('B');
			x--;
		}
		ft_putchar('A');
	}
	return (0);
}

int	rush(int x, int y)
{
	if (y > 0)
	{
		first_line(x);
		while (y - 2 >= 1)
		{
			middle_line(x);
			y--;
		}
		if (y > 1)
			return (last_line(x));
		return (0);
	}
	return (0);
}
