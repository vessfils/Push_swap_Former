/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 18:44:25 by vess              #+#    #+#             */
/*   Updated: 2022/01/14 19:35:54 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	ft_sort_three(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->content;
	b = (*stack_a)->next->content;
	c = (*stack_a)->next->next->content;
	if (a > b && b < c && a < c)
		ft_sa(stack_a, 1);
	if (a > b && b > c && a > c)
	{
		ft_sa(stack_a, 1);
		ft_rra(stack_a, 1);
	}
	if (a > b && c > b && a > c)
		ft_ra(stack_a, 1);
	if (b > a && b > c && c > a)
	{
		ft_sa(stack_a, 1);
		ft_ra(stack_a, 1);
	}
	if (a < b && a > c && b > c)
		ft_rra(stack_a, 1);
}

static	void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	ft_push_smallest_a(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	ft_push_smallest_a(stack_a, stack_b);
	ft_push_smallest_a(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void	ft_small_sort(int ac, t_list **stack_a, t_list **stack_b)
{
	if (ac == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			ft_sa(stack_a, 1);
	}
	else if (ac == 3)
		ft_sort_three(stack_a);
	else if (ac == 4)
		ft_sort_four(stack_a, stack_b);
	else if (ac == 5)
		ft_sort_five(stack_a, stack_b);
}
