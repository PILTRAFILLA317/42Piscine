#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;
	char	b;

	if (nb < 10 && nb >= 0)
	{
		a = nb + '0';
		write(1, &a, 1);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		b = nb % 10 + '0';
		write(1, &b, 1);
		if (nb < 0)
			write(1, "-", 1);
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
}
