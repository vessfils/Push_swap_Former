/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:26:44 by vess              #+#    #+#             */
/*   Updated: 2022/01/01 16:19:57 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **stack_a, int flag)
{
	t_list	*front;
	t_list	*back;
	t_list	*head;

	front = *stack_a;
	back = *stack_a;
	head = *stack_a;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
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
	*stack_a = front;
	if (flag == 1)
		write(1, "rra\n", 4);
}
