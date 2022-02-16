void	ft_rev_int_tab(int *tab, int size)
{
	int	pos;
	int	reverse;

	pos = 0;
	while (pos < size)
	{
		reverse = tab[pos];
		tab[pos] = tab[size - 1];
		tab[size - 1] = reverse;
		pos ++;
		size --;
	}
}
