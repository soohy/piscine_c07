/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:26:56 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/13 10:34:30 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_sign;

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	is_valid(char *base)
{
	int i;
	int j;

	if (base[0] == 0 || base[1] == 0)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
			return (0);
		i++;
	}
	return (1);
}

char	*skip_ss(char *str)
{
	while (is_space(*str))
		str++;
	g_sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			g_sign *= -1;
		str++;
	}
	return (str);
}

int	get_nb(char s, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (s == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int b;
	int n_base;
	int num;

	b = 0;
	while (base[b])
		b++;
	num = 0;
	str = skip_ss(str);
	while (*str)
	{
		n_base = get_nb(*str, base);
		if (n_base == -1)
			break ;
		num = (num * b) + n_base;
		str++;
	}
	return (g_sign * num);
}
