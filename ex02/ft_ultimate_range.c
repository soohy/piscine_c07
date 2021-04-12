/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 06:11:07 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/13 07:42:06 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long long i;
	if (min < max)
	{
		*range = (int *)malloc(sizeof(int) * (long long)(max - min));
		if (*range == 0)
			return (-1);
		i = 0;
		while (min < max)
		{
			(*range)[i] = min;
			i++;
			min++;
		}
		return (i);
	}
	return (0);
}
