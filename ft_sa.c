/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:56:06 by vess              #+#    #+#             */
/*   Updated: 2022/01/01 16:21:57 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **stack_a, int flag)
{
	t_list	*tmp;

	if (*stack_a == NULL)
		return ;
	if (stack_a && (*stack_a)->next != NULL)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = (*stack_a)->next;
		(*stack_a)->next = tmp;
	}
	if (flag == 1)
		write(1, "sa\n", 3);
}
