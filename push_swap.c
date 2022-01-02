/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 17:02:17 by vess              #+#    #+#             */
/*   Updated: 2022/01/02 22:11:00 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_list(int ac, char **av, t_list **stack_a)
{
	int	i;

	i = ac - 1;
	while (i > 0)
	{
		ft_lstadd_front(&*stack_a, ft_lstnew(atoi(av[i])));
		i--;
	}
	return (*stack_a);
}

void	print_list(t_list *stack_a)
{
	while (stack_a != NULL)
	{
		printf("%d\n", stack_a->content);
		stack_a = stack_a->next;
	}
	printf("-------------------------\n");
	printf("A\n");
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	stack_a = create_list(ac, av, &stack_a);
	i = 0;
	if (stack_a == NULL || selection_ordered(stack_a) == 0)
		return (0);
	if (ac <= 6)
		ft_small_sort(ac, &stack_a, &stack_b);
	print_list(stack_a);
	print_list(stack_b);
	return (0);
}
