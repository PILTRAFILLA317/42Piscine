#include <unistd.h>

void 	put_char(int x)
{
	char	n;

	n = x / 10 + '0';
	write(1, &n, 1);
	n = x % 10 + '0';
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			put_char(a);
			write(1, " ", 1);
			put_char(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
