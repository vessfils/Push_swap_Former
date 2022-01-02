/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 16:24:16 by vess              #+#    #+#             */
/*   Updated: 2022/01/02 17:40:36 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	//void				*content;
	 int			content;
	int					flag;
	struct s_list		*next;
}					t_list;

void	ft_sa(t_list **stack_a, int flag);
void	ft_sb(t_list **stack_b, int flag);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list **stack_a, int flag);
void	ft_rb(t_list **stack_b, int flag);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack_a, int flag);
void	ft_rrb(t_list **stack_b, int flag);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);
int		selection_ordered(t_list *stack_a);
int		ft_atoi(const char *str);
void	ft_lstadd_back(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **alst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
#endif
