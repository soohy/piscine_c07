/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:23:23 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/14 22:27:45 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_valid(char *base);
int		ft_atoi_base(char *str, char *base);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strlen_base(int nbr, int b)
{
	int l;

	l = 0;
	while (nbr)
	{
		l++;
		nbr /= b;
	}
	return (l);
}

char	*ft_itoa_base(int nbr, char *base, int b, int l)
{
	char	*str;

	if (nbr < 0)
	{
		if (!(str = (char *)malloc(sizeof(char) * (1 + l + 1))))
			return (0);
		str[0] = '-';
		str[l + 1] = '\0';
		while (l-- > 0)
		{
			str[l + 1] = base[nbr % b];
			nbr /= b;
		}
		return (str);
	}
	if (!(str = (char *)malloc(sizeof(char) * (l + 1))))
		return (0);
	str[l] = '\0';
	while (l-- > 0)
	{
		str[l] = base[nbr % b];
		nbr /= b;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i_from;
	char	*a_to;
	int		b;
	int		l;

	if (is_valid(base_from) && is_valid(base_to))
	{
		i_from = ft_atoi_base(nbr, base_from);
		b = ft_strlen(base_to);
		l = ft_strlen_base(i_from, b);
		a_to = ft_itoa_base(i_from, base_to, b, l);
		return (a_to);
	}
	return (0);
}
