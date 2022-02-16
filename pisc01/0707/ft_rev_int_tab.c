void	ft_rev_int_tab(int *tab, int size)
{
	int	pos;
	int cur;

	pos = 0;
	while (pos <= size)
	{
		pos = tab[size];
		pos ++;
		size --;
	}
}
