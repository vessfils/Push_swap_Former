/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 19:57:54 by vess              #+#    #+#             */
/*   Updated: 2021/12/29 20:09:41 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	ft_rb(t_list **stack_b, int flag)
{
	t_list *tmp;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp = (*stack_b)->next;
	(*stack_b)->next = NULL;
	ft_lstadd_back(&tmp, *stack_b);
	*stack_b = tmp;
	if (flag == 1)
		write(1, "rb\n", 3);
}
