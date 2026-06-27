/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 12:37:16 by nfurst            #+#    #+#             */
/*   Updated: 2026/06/27 12:56:51 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	special_line(int x)
{
	int	l;

	l = 0;
	while (l < x)
	{
		if (l == 0 || l == (x - 1))
			ft_putchar('o');
		else
			ft_putchar('-');
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
		if (l == 0 || l == (x - 1))
			ft_putchar('|');
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
				special_line(x);
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
