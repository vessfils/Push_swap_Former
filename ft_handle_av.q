/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_av.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:19:49 by vess              #+#    #+#             */
/*   Updated: 2022/01/11 00:16:49 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "push_swap.h"

static char	**ft_parse_av(int ac, char **av)
{
	char	**nbr;
	char	*av_str;	
	char	*tmp;
	int	i;
	
	i = 0;
	while (++i < ac)
	{
		tmp = ft_strjoin(av_str, av[i]);
		free(av_str);
		av_str = tmp;
		tmp = ft_strjoin(av_str, " ");
		free(av_str);
		av_str = tmp;

	}
	*nbr = ft_split(av_str, ' ');
	free(av_str);
	return (nbr);
}
