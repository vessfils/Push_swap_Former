/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:56:06 by vess              #+#    #+#             */
/*   Updated: 2022/01/01 16:22:50 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_list **stack_b, int flag)
{
	t_list	*tmp;

	if (*stack_b == NULL)
		return ;
	if (stack_b && (*stack_b)->next != NULL)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = (*stack_b)->next;
		(*stack_b)->next = tmp;
	}
	if (flag == 1)
		write(1, "sb\n", 3);
}
