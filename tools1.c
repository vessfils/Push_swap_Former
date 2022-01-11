/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:36:25 by vess              #+#    #+#             */
/*   Updated: 2022/01/11 21:30:17 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	size_t	len;

	str = 0;
	str = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!str)
		return (NULL);
	len = 0;
	while (s1 && s1[len])
	{
		str[len] = s1[len];
		len++;
	}
	i = -1;
	while ((char *)s2 && s2[++i])
		str[len++] = s2[i];
	str[len] = '\0';
	return (str);
}

static char	**ft_panic(char **arr, int len)
{
	while (--len >= 0)
	{
		free(arr[len]);
	}
	free(arr);
	return (NULL);
}

static int	ft_count_words(const char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*malloc_word(const char *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**arr;

	i = 0;
	arr = 0;
	if (!s)
		return (0);
	arr = (char **)malloc(sizeof(char *) *(ft_count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			arr[i] = malloc_word(s, c);
			if (!arr[i++])
				return (ft_panic(arr, i - 1));
			while (*s && *s != c)
				s++;
		}
	}
	arr[i] = 0;
	return (arr);
}

char	*ft_strdup(const char *str)
{
	int		i;
	char	*cpy;
	int		len;

	i = 0;
	cpy = 0;
	len = ft_strlen((char *)str);
	cpy = (char *)malloc (sizeof(*cpy) * (len + 1));
	if (!cpy)
		return (NULL);
	while (i < len)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}

char	**ft_parse_av(int ac, char **av)
{
	char	**nbr;
	char	*av_str;	
	char	*tmp;
	int	i;
	
	av_str = ft_strdup("");
	i = 0;
	while (++i < ac)
	{
		tmp = ft_strjoin(av_str, av[i]);
		free(av_str);
		av_str = tmp;
		tmp = ft_strjoin(av_str, " ");
		free(av_str);
		av_str = tmp;

	}
	nbr = ft_split(av_str, ' ');
	free(av_str);
	return (nbr);
}

/*
int main (int ac, char **av)
{
	int	i;
	char	**nb;
	int cnt;
	i = 0;
	cnt = 0;
	nb = ft_parse_av(ac, av);
	while (nb[i])
	{
		cnt++;
		i++;
	}
	i = 0;	
	while (i < cnt)
	{
	printf("%s\n", nb[i]);
		i++;
	}
	return (0);	
}
*/
