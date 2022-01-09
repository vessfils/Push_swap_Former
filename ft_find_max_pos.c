/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:57:51 by vess              #+#    #+#             */
/*   Updated: 2022/01/09 22:28:59 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_max_pos(t_list *stack)
{
	int	pos;

	pos = 0;
	while (stack != NULL)
	{
		if (ft_biggest_finder(stack) == stack->content)
			return (pos);
		stack = stack->next;
		pos++;
	}
}
