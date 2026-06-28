/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                            :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaine <jgaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:00:00 by login             #+#    #+#             */
/*   Updated: 2026/06/28 11:53:05 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int	l;

	l = 0;
	while (l < x)
	{
		if (l == 0)
			ft_putchar('/');
		else if (l == (x - 1))
			ft_putchar('\\');
		else
			ft_putchar('*');
		l++;
	}
	ft_putchar('\n');
}

void	last_line(int x)
{
	int	l;

	l = 0;
	while (l < x)
	{
		if (l == 0)
			ft_putchar('\\');
		else if (l == (x - 1))
			ft_putchar('/');
		else
			ft_putchar('*');
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
			ft_putchar('*');
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
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			if (i == 0)
				first_line(x);
			else if (i == (y - 1))
				last_line(x);
			else
				normal_line(x);
			i++;
		}
	}
	else if (x == 0 || y == 0)
		write(1, "A rectangle of 0 is too small to display", 40);
	else
		write(1, "X or Y contains a wrong value", 29);
}
