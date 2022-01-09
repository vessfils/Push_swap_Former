/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:01:37 by vess              #+#    #+#             */
/*   Updated: 2022/01/09 22:32:34 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp_a;

	tmp_a = *a;
	*a = *b;
	*b = tmp_a;
}

int	ft_partition(int *a, int start, int end)
{
	int	pivot;
	int	partitionindex;
	int	i;

	pivot = a[end];
	partitionindex = start;
	i = start;
	while (i < end)
	{
		if (a[i] <= pivot)
		{
			ft_swap(&a[i], &a[partitionindex]);
			partitionindex++;
		}
		i++;
	}
	ft_swap(&a[partitionindex], &a[end]);
	return (partitionindex);
}

void	ft_quicksort(int *a, int start, int end)
{
	int	partitionindex;

	if (start < end)
	{
		partitionindex = ft_partition(a, start, end);
		ft_quicksort(a, start, partitionindex - 1);
		ft_quicksort(a, partitionindex + 1, end);
	}
}

/*
int main ()
{
	int a[] = {7, 2, 3, 1, 6, 8, 4, 10, 148, 9, 1000, 26, 57, 89};
	int i;

	i = 0;

	ft_quicksort(a, 0, 13);
	while (i < 14)
	{
		printf("[%d]%d\n",i,  a[i]);
		i++;
	}
	return (0);
}
*/
