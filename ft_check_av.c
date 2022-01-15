/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_av.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 23:33:17 by vess              #+#    #+#             */
/*   Updated: 2022/01/15 14:10:12 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

 int	ft_check_double(int ac, char**av)
{
	int i;
	int	j;

	i = -1;
	while (++i < ac)
	{
		j = i;	
		while (++j < ac)	
		{
			if (atoi(av[i]) == atoi(av[j]))
				return (1);
		}
	}
	return (0);
}

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int ft_check_nb_valid (char **av)
{
	int	i;
	int	j;
	i = -1;
	while (av[++i])
	{
		j = -1;
		if (av[i][0] == '-' || av[i][0] == '+')
			j++;
		if(!ft_isdigit(av[i][j + 1]))
			return (1);
		while (av[i][++j])
		{
			if(!ft_isdigit(av[i][j]))
				return (1);
		}
	}
	return (0);
}

long	ft_atole(const char *str)
{
	int					i;
	unsigned  long long	value;
	int	 neg;

	i = 0;
	value = 0;
	neg = 1;
	while (str[i] && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	if (str[i] == '-')
	{
		neg *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		value = value * 10 + str[i] - '0';
		i++;
	}
	return (neg * value);
}


 int	check_is_int(char *s)
{
	int		len;
	long nb;
	len = ft_strlen(s);
	if (len > 11)
		return (1);
	nb = ft_atole(s);
	if  (len < 10)
		return (0);
	if ((nb  > 2147483647) || nb < -2147483648)
		return (1);
	return (0);
}

int ft_check_total (int ac, char **av)
{
	int	i;
	
	if (ft_check_nb_valid(av))
		return (1);
	if (ft_check_double(ac, av))
		return (1);
	i = -1;
	while (av[++i])
	{
		if (check_is_int(av[i]))
			return (1);
	}
	return (0);
}

