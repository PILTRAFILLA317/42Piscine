void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + j) < *(tab + j))
			{
				aux = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = aux;
			}
			j ++;
		}
		i ++;
	}
}
