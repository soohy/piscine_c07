/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:46:02 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/14 09:46:22 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = ft_strlen(dest);
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin_sub(char *tab, char **str, char *sep)
{
	while (*str)
	{
		tab = ft_strcat(tab, *str);
		str++;
		if (*str)
			tab = ft_strcat(tab, sep);
	}
	return (tab);
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	char	*tab;
	int		s;
	int		i;

	s = 0;
	i = -1;
	while (i++ < size - 1)
		s += ft_strlen(str[i]);
	tab = (char *)malloc(sizeof(char) * \
		(s + (size - 1) * ft_strlen(sep) + 1));
	if (size > 0)
		ft_strjoin_sub(tab, str, sep);
	return (tab);
}
