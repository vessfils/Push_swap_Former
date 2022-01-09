/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:11:44 by vess              #+#    #+#             */
/*   Updated: 2022/01/09 22:21:28 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_in_chunk(t_list **stack_a, t_list **stack_b, int chunk_size)
{
	int	chunk_n;
	int	i;
	int	j;
	int	p;
	int	initial_size;

	chunk_n = 1;
	i = 0;
	j = 0;
	p = 0;
	initial_size = ft_lstsize(*stack_a);
	while (i < initial_size)
	{
		if ((*stack_a)->content < (chunk_size * chunk_n))
		{
			ft_pb(&*stack_a, &*stack_b);
			p++;
			if ((*stack_b)->content < (chunk_size * chunk_n - (chunk_size / 2)) && p > 1)
				ft_sb(&*stack_b, 1);
			i++;
		}
		else
		{
			ft_ra(&*stack_a, 1);
			j++;
		}
		if (i + j == initial_size)
		{
			chunk_n++;
			j = 0;
			p = 0;
		}
	}
}

static void	ft_push_back_in_order(t_list **stack_a, t_list **stack_b)
{
	int	initial_size;
	int	i;
	int	count;

	i = 0;
	count = 0;
	initial_size = ft_lstsize(*stack_b);
	while (i < initial_size)
	{
		if (ft_find_max_pos(*stack_b) >= ft_lstsize(*stack_b) / 2)
		{
			count = ft_lstsize(*stack_b) - ft_find_max_pos(*stack_b);
			while (count--)
				ft_rrb(stack_b, 1);
		}
		if (ft_find_max_pos(*stack_b) < ft_lstsize(*stack_b) / 2)
		{
			count = ft_find_max_pos(*stack_b);
			while (count--)
				ft_rb(stack_b, 1);
		}
		ft_pa(stack_a, stack_b);
		i++;
	}
}

void	ft_big_sort(t_list **stack_a, t_list **stack_b)
{
	int	chunk_size;

	chunk_size = ft_lstsize(*stack_a) / 12 + 22;
	ft_push_in_chunk(stack_a, stack_b, chunk_size);
	ft_push_back_in_order(stack_a, stack_b);
}
