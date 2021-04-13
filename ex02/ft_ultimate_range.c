/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 06:11:07 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/13 06:32:09 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	long long i;

	*range = 0;
	if (min < max)
	{
		tab = (int *)malloc(sizeof(*tab) * (long long)(max - min));
		if (tab == 0)
			return (-1);
		i = 0;
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
		*range = tab;
		return (i);
	}
	return (0);
}
