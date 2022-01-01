/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 17:58:32 by vess              #+#    #+#             */
/*   Updated: 2021/12/29 19:09:32 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = NULL;
	new = malloc(sizeof(t_list));
	if (new)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}

t_list *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next!= NULL)
		lst = lst->next;
	return (lst);
}

void ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst)
	{
		new->next=*alst;// adresse pointe sur alst
		*alst = new; // new = la liste
	}
	else
		*alst = new;
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last;
	if (alst != NULL && *alst!= NULL)
	{
		last = ft_lstlast(*alst);
		last->next = new;
	}
	else
		*alst = new;
}

