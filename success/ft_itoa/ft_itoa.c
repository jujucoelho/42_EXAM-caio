#include <stdlib.h>

int	ft_pot(int nbr)
{
	int	pot;
	
	pot = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		pot *= 10;
	}
	return(pot);
}

int	ft_more_one_digit(int nbr)
{
	while (nbr > 9)
		nbr /= 10;
	return(nbr);
}

char	*ft_itoa(int	nbr)
{
	char	*arr;
	int		i;
	int		c_nbr;
	int		pot;
	int		x;

	arr = malloc(sizeof(char) * 12);
    c_nbr = nbr;
    x = 0;
    i = 0;
    if (c_nbr < 0)
    {
        c_nbr *= -1;
        arr[i] = '-';
        i++;
    }
	while (c_nbr >= 10)
	{
		pot = ft_pot(c_nbr);
		x = ft_more_one_digit(c_nbr);
		arr[i] = x + '0';
		c_nbr -= (x * pot); 
		i++;
	}
	arr[i] = c_nbr + '0';
	arr[i + 1] = '\0';
	return (arr);
}