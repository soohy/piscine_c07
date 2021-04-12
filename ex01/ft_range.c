/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 05:02:55 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/13 07:18:39 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*tab;
	long long	i;

	tab = 0;
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
	}
	return (tab);
}
