#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	c;

	i = 0;
	j = 0;
	if (argc == 4)
	{
		if((argv[2][1] != '\0') || (argv[3][1] != '\0'))
		{
			write(1, "\n", 1);
			exit(1);
		}
		while (argv[1][i])
		{
			if (argv[2][0] == argv[1][i])
				j++;
			i++;
		}
		if (j == 0)
		{
			while (argv[1][j])
			{
				write (1, &argv[1][j], 1);
				j++;
			}
			write(1, "\n", 1);
			exit(1);
		}
		i = 0;
		while (argv[1][i])
		{
			if (argv[2][0] == argv[1][i])
			{
				c = argv[3][0];
				argv[1][i] = c;
			}
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}