int	 is_power_of_2(unsigned int n)
{
	while (n >= 2)
	{
		while ((n % 2) == 0)
			n /= 2;
		if (n == 2)
			return (1);
	}
	return (0);
}