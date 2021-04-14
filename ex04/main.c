/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:15:40 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/14 22:18:46 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(char *str, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%s\n", ft_convert_base(av[1], av[2], av[3]));
	}
	return (0);
}
