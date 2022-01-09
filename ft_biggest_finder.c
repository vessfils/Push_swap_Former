/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_biggest_finder.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:56:03 by vess              #+#    #+#             */
/*   Updated: 2022/01/09 19:57:25 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_biggest_finder(t_list *stack)
{
	int	biggest;

	biggest = stack->content;
	while (stack != NULL)
	{
		if (biggest <= stack->content)
			biggest = stack->content;
		stack = stack->next;
	}
	return (biggest);
}
