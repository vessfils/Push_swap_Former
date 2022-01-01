/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:56:06 by vess              #+#    #+#             */
/*   Updated: 2021/12/28 19:15:19 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void ft_sb(t_list **stack_b, int flag)
{
	t_list *tmp;
	
	if (*stack_b == NULL)
		return ;
	if (stack_b && (*stack_b)->next != NULL)
	{
		tmp = *stack_b; //Save 1er maillon dans tmp
		*stack_b = (*stack_b)->next; // on avance la stack sur le second maillon
		tmp->next = (*stack_b)->next; // je link le premier maillon au 3 eme maillon
		(*stack_b)->next = tmp; // on link le 2 eme maillon au 1 maillon
	}
	if (flag == 1)
		write(1, "sb\n", 3);
}
