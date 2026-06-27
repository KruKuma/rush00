/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 11:46:12 by mgrossen          #+#    #+#             */
/*   Updated: 2026/06/27 13:22:21 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	special_line(int x, int i, int y)
{
	int	l;

	l = 0;
	while (l < x)
	{
		if (l == 0 || l == (x - 1))
		{
			if (i == 0)
			{
				ft_putchar('A');
			}
			else if (i == (y - 1))
			{
				ft_putchar('C');
			}
		}
		else
		{
			ft_putchar('B');
		}
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
			if (i == 0 || i == (y - 1))
				special_line(x, i, y);
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
