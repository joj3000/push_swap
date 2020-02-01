/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:34:42 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/27 18:54:16 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_integer(int ac, char **av)
{
	int			i;
	long int	min;
	long int	max;

	i = 1;
	min = -2147483648;
	max = 2147483647;
	while (i < ac)
	{
		if (ft_atol(av[i]) < min || ft_atol(av[i]) > max)
			return (0);
		i++;
	}
	return (1);
}
