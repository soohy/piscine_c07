/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 07:23:48 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/13 07:42:50 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int **range;
	int min;
	int max;
	int i;
	
	range = 0;
	min = -21;
	max = 22;
	ft_ultimate_range(range, min, max);
	printf("%d\n", ft_ultimate_range(range, min, max));
	i = 0;
	while (i < max - min)
	{
		printf("%d ", (*range)[i]);
		i++;
	}
	return (0);
}
