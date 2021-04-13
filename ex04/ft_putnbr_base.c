/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:19:30 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/13 12:03:32 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_valid(char *base);
int	ft_atoi_base(char *str, char *base);

int	do_alloc(int nbr, char *base, char *str)
{
	int l;

	b = 0;
	while (base[b])
		b++;
	l = 1;
	while (nbr / b != 0)
		l++;
	str = (char *)malloc(sizeof(char) * l);
	return (b);
}

void	*ft_itoa_base(int nbr, char *base, char *str, int b)
{

}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int i_from;
	char *a_to;
	int i;

	if (is_valid(base_from) && is_valid(base_to))
	{
		i_from = ft_atoi_base(nbr, base_from);
		i = 0;
		if (i_from < 0)
		{
			a_to[0] = '-';
			i++;
		}
		while()
			str[i] = base_to[i_form % b]
		return (itoa_t);
	}
	return (0);
}
