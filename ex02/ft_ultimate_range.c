/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 06:11:07 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/15 04:21:17 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			*tab;
	long long	i;

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
