/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 22:42:39 by vess              #+#    #+#             */
/*   Updated: 2021/12/29 19:14:04 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	ft_ra(t_list **stack_a, int flag)
{
	t_list *tmp;
	if ((*stack_a)->next == NULL || *stack_a == NULL)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next= NULL;
	ft_lstadd_back(&tmp, *stack_a);
	*stack_a = tmp;
	if (flag == 1)
		write(1, "ra\n", 3);
}
