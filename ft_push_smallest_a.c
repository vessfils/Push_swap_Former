/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_smallest_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 20:32:34 by vess              #+#    #+#             */
/*   Updated: 2022/01/02 21:37:11 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	ft_push_smallest_a_next(t_list **stack_a, int i, int n)
{
	if (n < 3)
	{
		i = 0;
		while (i++ < n)
			ft_ra(stack_a, 1);
	}
	else
		ft_rra(stack_a, 1);
}

void	ft_push_smallest_a(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		n;
	t_list	*tmp;

	tmp = *stack_a;
	i = 0;
	n = 0;
	while (tmp->next != NULL)
	{
		if (ft_smallest_finder(tmp) == tmp->content)
			break ;
		tmp = tmp->next;
		i++;
	}
	n = i;
	if (n != 0)
		ft_push_smallest_a_next(stack_a, i, n);
	ft_pb(stack_a, stack_b);
}
