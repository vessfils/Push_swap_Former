/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_av.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 23:33:17 by vess              #+#    #+#             */
/*   Updated: 2022/01/12 23:50:46 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_double(int ac, char**av)
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

static int ft_check_nb_valid (char **av)
{
	int	i;

	i = -1;
	while (av[++i])
	{
		if(!ft_isdigit(atoi(av[i])))
			return (1);
	}
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
static int	check_is_int(char *s)
{
	int		len;
	short	is_neg;
	short	sign;

	sign = 0;
	is_neg = 0;
	len = ft_strlen(s);
	if (*s == '-' && ++is_neg && ++sign && s++)
		len--;
	else if (*s == '+' && ++sign && s++)
		len--;
	while (*s == '0' && *s && len--)
		s++;
	if (len > 10)
		return (1);
	else if (len < 10)
		return (0);
	if (!sign && !is_neg && ft_strncmp(s, "2147483648", 10) >= 0)
		return (1);
	else if (sign && !is_neg && ft_strncmp(s, "2147483648", 10) >= 0)
		return (1);
	else if (sign && is_neg && ft_strncmp(s, "2147483649", 10) >= 0)
		return (1);
	return (0);
}

int ft_check_total (int ac, char **av)
{
	int	i;
	
	if (ft_check_nb_valid(av))
		return (1);
	i = -1;
	while (av[++i])
	{
		if (check_is_int(av[i]))
			return (1);
	}
	return (0);
}
