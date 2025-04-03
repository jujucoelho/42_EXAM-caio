int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int	max;
	
	max = tab[0];
	i = len - 1;
	if (len == 0)
		return (0);
	else
	{
		while (i > 0)
		{
			if (max < tab[i])
				max = tab[i];
			i--;
		}
		return (max);
	}
}