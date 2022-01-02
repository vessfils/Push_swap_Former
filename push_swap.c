/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 17:02:17 by vess              #+#    #+#             */
/*   Updated: 2022/01/02 17:01:10 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_list(int ac, char **av, t_list **stack_a)
{
	int	i;

	i = ac - 1;
	while (i > 0)
	{
		ft_lstadd_front(&*stack_a, ft_lstnew(av[i]));
		i--;
	}
	return (*stack_a);
}

void	print_list(t_list *stack_a)
{
	while (stack_a != NULL)
	{
		printf("%s\n", (char *)stack_a->content);
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
	print_list(stack_a);
	return (0);
}
