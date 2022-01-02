/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_ordered.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:10:08 by vess              #+#    #+#             */
/*   Updated: 2022/01/02 17:13:42 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	selection_ordered(t_list *stack_a)
{
	while (stack_a)
	{
		if (stack_a->next)
		{
			if (stack_a->content > stack_a->next->content)
				return (1);
		}
		stack_a = stack_a->next;
	}
	return (0);
}
