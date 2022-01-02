/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:26:44 by vess              #+#    #+#             */
/*   Updated: 2022/01/01 16:20:23 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrb(t_list **stack_b, int flag)
{
	t_list	*front;
	t_list	*back;
	t_list	*head;

	front = *stack_b;
	back = *stack_b;
	head = *stack_b;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	while (front->next != NULL)
	{
		front = front->next;
		if (front->next != NULL)
			back = back->next;
	}
	if (front->next == NULL)
	{
		front->next = head;
		back->next = NULL;
	}
	*stack_b = front;
	if (flag == 1)
		write(1, "rrb\n", 4);
}
