/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:45:23 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/15 04:21:42 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int			*range;
	int			min;
	int			max;
	long long	i;

	range = 0;
	min = 9;
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
