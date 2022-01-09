/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 17:58:32 by vess              #+#    #+#             */
/*   Updated: 2022/01/08 19:15:42 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = NULL;
	new = malloc(sizeof(t_list));
	if (new)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst)
	{
		new->next = *alst;
		*alst = new;
	}
	else
		*alst = new;
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (alst != NULL && *alst != NULL)
	{
		last = ft_lstlast(*alst);
		last->next = new;
	}
	else
		*alst = new;
}

static int	ft_outvalue(int neg)
{
	if (neg < 0)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	value;
	int					neg;

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
		if (value > value * 10 + str[i] + '0')
			return (ft_outvalue(neg));
		value = value * 10 + str[i] - '0';
		i++;
	}
	return (neg * value);
}

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
