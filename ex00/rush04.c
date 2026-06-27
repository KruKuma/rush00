/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:04:11 by nfurst            #+#    #+#             */
/*   Updated: 2026/06/27 13:11:20 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top_line(int x)
{
	int	l;

	l = 0;
	while (l < x)
	{
		if (l == 0)
			ft_putchar('A');
		else if (l == (x - 1))
			ft_putchar('C');
		else
			ft_putchar('B');
		l++;
	}
	ft_putchar('\n');
}

void	bottom_line(int x)
{
	int	l;

	l = 0;
	while (l < x)
	{
		if (l == 0)
			ft_putchar('C');
		else if (l == (x - 1))
			ft_putchar('A');
		else
			ft_putchar('B');
		l++;
	}
	ft_putchar('\n');
}

void	normal_line(int x)
{
	int	l;

	l = 0;
	while (l < x)
	{
		if (l == 0)
			ft_putchar('B');
		else if (l == (x - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
		l++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0 && y > 0 && x <= 2147483647 && y <= 2147483647)
	{
		while (i < y)
		{
			if (i == 0)
				top_line(x);
			else if (i == (y - 1))
			{
				bottom_line(x);
			}
			
			else
			{
				normal_line(x);
			}
			i++;
		}
	}
	else
	{
		write(1, "X or Y contains a wrong value", 29);
	}
}
