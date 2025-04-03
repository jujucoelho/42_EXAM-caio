#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] > 32)
			{
				//printf("Imprime letras %c\n",argv[1][i]);
				write(1, &argv[1][i], 1);
				if ((argv[1][i + 1] <= 32) && (argv[1][i + 2]))
				{
					write(1, " ", 1);
				//	printf("Imprime espaços %c\n",argv[1][i]);
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	printf("this time it will be more complex .$\n");
	return (0);
}