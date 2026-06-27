void	ft_putchar(char c);

void	special_line(int x)
{
	int l;
	
	l = 0;
	while (l < x)
	{
		if (l == 0)
			ft_putchar('A');
		if ( l == (x - 1))
			ft_putchar('C');
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
	while (l <= x)
	{
		if (l == 0)
			ft_putchar('B');
		if (l == (x - 1))
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
	while (i < y)
	{
		if ( i == 0 || i == (y - 1))
			special_line(x);
		else 
		{
			normal_line(x);
		}
		i++;
	}
}
