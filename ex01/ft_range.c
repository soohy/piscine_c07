/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 05:02:55 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/15 04:17:28 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*tab;
	long long	i;

	if (min < max)
	{
		tab = (int *)malloc(sizeof(int) * (long long)(max - min));
		if (tab == 0)
			return (0);
		i = 0;
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
		return (tab);
	}
	return (0);
}
