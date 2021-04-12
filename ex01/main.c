/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 07:23:48 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/13 07:23:50 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int min;
	int max;
	int i;

	min = -21;
	max = 22;
	i = 0;
	while (i < max - min)
	{
		printf("%d ", ft_range(min, max)[i]);
		i++;
	}
	return (0);
}
