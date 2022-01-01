/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:56:06 by vess              #+#    #+#             */
/*   Updated: 2021/12/28 18:49:11 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void ft_sa(t_list **stack_a, int flag)
{
	t_list *tmp;
	
	if (*stack_a == NULL)
		return ;
	if (stack_a && (*stack_a)->next != NULL)
	{
		tmp = *stack_a; //Save 1er maillon dans tmp
		*stack_a = (*stack_a)->next; // on avance la stack sur le second maillon
		tmp->next = (*stack_a)->next; // je link le premier maillon au 3 eme maillon
		(*stack_a)->next = tmp; // on link le 2 eme maillon au 1 maillon
	}
	if (flag == 1)
		write(1, "sa\n", 3);
}
