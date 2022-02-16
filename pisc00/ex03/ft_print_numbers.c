#include <unistd.h>

void	ft_print_numbers(void)
{
	int		digitos;

	digitos = 48;
	while (digitos < 58)
	{
		write(1, &digitos, 1),
		digitos++;
	}
}
