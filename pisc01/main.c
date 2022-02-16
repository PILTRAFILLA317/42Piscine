#include <stdio.h>

#include "./ex05/ft_putstr.c"
#include "./ex06/ft_strlen.c"

int main(void)
{
	write(1, "ex00:\n ", 6);
    ft_putstr('a');
    write(1, "\n\nex01:\n", 8);
    ft_strlen('a');
}
