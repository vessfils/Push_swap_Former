/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 23:14:20 by vess              #+#    #+#             */
/*   Updated: 2022/01/01 16:19:02 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b)
	{
		tmp = (*stack_b)->next;
		(*stack_b)->next = *stack_a;
		*stack_a = *stack_b;
		*stack_b = tmp;
		write(1, "pa\n", 3);
	}
}
