/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smallest_finder.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 20:27:56 by vess              #+#    #+#             */
/*   Updated: 2022/01/02 20:31:37 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_smallest_finder(t_list *stack)
{
	int	smallest;

	smallest = stack->content;
	while (stack != NULL)
	{
		if (smallest >= stack->content)
			smallest = stack->content;
		stack = stack->next;
	}
	return (smallest);
}
