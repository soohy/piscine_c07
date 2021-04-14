/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 00:13:35 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/15 04:01:32 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		match_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		count_w(char *str, char *charset)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str && match_sep(*str, charset))
			str++;
		while (*str && !match_sep(*str, charset))
			str++;
		if (*str || !match_sep(*(str - 1), charset))
			count++;
	}
	return (count);
}

int		w_len(char *str, char *charset)
{
	int len;

	len = 0;
	while (!match_sep(*str, charset))
	{
		len++;
		str++;
	}
	return (len);
}

char	*get_w(char *str, char *charset)
{
	char	*tab;
	int		j;

	tab = (char *)malloc(sizeof(char) * (w_len(str, charset) + 1));
	j = 0;
	while (!match_sep(*str, charset))
	{
		tab[j] = *str;
		j++;
		str++;
	}
	tab[j] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		count;
	int		i;

	count = count_w(str, charset);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	i = 0;
	while (i < count)
	{
		while (match_sep(*str, charset))
			str++;
		tab[i] = get_w(str, charset);
		while (!match_sep(*str, charset))
			str++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
