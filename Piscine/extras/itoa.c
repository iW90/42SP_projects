#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int num_i)
{
	int	i;
	int	aux;
	char *num_a;

	aux = num_i;
	i = 1;
	while (num_i >= 0)
	{
		num_i /= 10;
		i++;
	}
	num_a = malloc(i + 1);
	num_a[i] = '\0';
	i--;
	while (i >= 0)
	{
		num_a[i] = aux % 10 + 48;
		aux /= 10;
		i--;
	}
	return (num_a);
}