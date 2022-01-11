/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_av.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 23:33:17 by vess              #+#    #+#             */
/*   Updated: 2022/01/11 23:47:49 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_double(int ac, char**av)
{
	int i;
	int	j;

	i = -1;
	while (++i < ac)
	{
		j = i;	

		while (++j < ac)	
		{
			if (atoi(av[i]) == atoi(av[j]))
				return (1);
		}

	}
	return (0);
}

int ft_check_nb_valid (ac. char** av)
{




}


int ft_check_total (int ac, char **av)
{
	


}
int main (int ac, char **av)
{
	
	printf("%d\n",ft_check_double(ac, av));

	return (0);
}


