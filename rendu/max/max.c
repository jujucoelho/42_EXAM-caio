int	max(int *tab, unsigned int len)
{
	int				i;
	unsigned int	j;
	
	i = tab[0];
	j = len;
	if (len == 0)
		return (0);
	else
	{
		while (j > 0)
		{
			if (tab[i] < tab[j])
				tab[i] == tab[j];
			j--;
		}
		return (&tab[i]);
	}
}