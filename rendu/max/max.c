int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int	max;
	
	max = tab[0];
	i = len - 1;
	printf("i = %d, max = %i, tab[i] = %d\n", i, max, tab[i]);
	if (len == 0)
		return (0);
	else
	{
		while (i > 0)
		{
			if (max < tab[i])
				max = tab[i];
			printf("2)i = %d, max = %i, tab[i] = %d\n", i, max, tab[i]);
			i--;
		}
		printf("3)i = %d, max = %i, tab[i] = %d\n", i, max, tab[i]);
		return (max);
	}
}