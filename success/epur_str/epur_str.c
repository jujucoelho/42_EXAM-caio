int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] > 32)
			{
				write(1, &argv[1][i], 1);
				j = i + 1;
				if (argv[1][j] <= 32)
				{
					while ((argv[1][j]) && (argv[1][j] <= 32))
							j++;
					if ((argv[1][j]) && (argv[1][j] > 32))
						write(1, " ", 1);
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}