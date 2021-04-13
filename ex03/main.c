#include <stdio.h>

char	*ft_strjoin(int size, char **str, char *sep);

int	main(int ac, char **av)
{
	char *tab;
	char *sep;

	sep = "...";
	if (ac > 1)
	{
		tab = ft_strjoin(ac - 1, av + 1, sep);
		printf("%s\n", tab);
	}
	return (0);
}

