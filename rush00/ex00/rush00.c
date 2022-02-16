#include "ft_putchar.c"

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || ((i == y && j == x) && i != 1 && j != 1))
				ft_putchar('o');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('o');
			else if ((j > 1 && j < x) && (i == 1 || i == y))
				ft_putchar('-');
			else if ((j == 1 && i > 1 && i < y) || ((j == x && i > 1) && i < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			if (j == x)
				ft_putchar('\n');
			j++;
		}
		i++;
	}
}
