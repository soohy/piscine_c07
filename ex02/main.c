#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *range;
	int min;
	int max;
	long long i;

	range = 0;
	min = -5;
	max = 9;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	ft_ultimate_range(&range, min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	return (0);
}
