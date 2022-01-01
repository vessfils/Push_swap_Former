/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 17:02:17 by vess              #+#    #+#             */
/*   Updated: 2021/12/31 16:21:18 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main ()
{
    t_list *stack_a = NULL;
	t_list *stack_b = NULL;
    ft_lstadd_front(&stack_a, ft_lstnew("3"));
     ft_lstadd_front(&stack_a, ft_lstnew("2"));
     ft_lstadd_front(&stack_a, ft_lstnew("1"));
	 ft_lstadd_front(&stack_b, ft_lstnew("3"));
     ft_lstadd_front(&stack_b, ft_lstnew("2"));
     ft_lstadd_front(&stack_b, ft_lstnew("1"));
	 int i = 0;
//	 ft_sa(&stack_a, 1);
//	 ft_sb(&stack_b, 1);
//	ft_ss(&stack_a, &stack_b);
//	ft_ra(&stack_a, 1);
//	ft_rb(&stack_b, 1);
//	ft_rr(&stack_a, &stack_b);
//	ft_rra(&stack_a, 1);
//	ft_rrb(&stack_b, 1);
//	ft_rrr(&stack_a, &stack_b);
	ft_pb(&stack_a, &stack_b);
	 while (i < 2)
	 {
		i++;
		printf("%s\n", (char *)stack_a->content);
		stack_a = stack_a->next;
	 }
	 printf("-------------------------\n"); 
	 printf("A\n");
	i = 0;
	while (i < 4)
	 {
		i++;
		printf("%s\n", (char *)stack_b->content);
		stack_b = stack_b->next;
	 }
	 printf("-------------------------\n"); 
	 printf("B\n");



	return (0);
}


