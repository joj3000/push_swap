/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 20:39:23 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:40:14 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_check(int ac, char **av)
{
	if (ac <= 1)
		return (0);
	if (is_number(ac, av) == 0
	|| is_integer(ac, av) == 0
	|| is_duplicate(ac, av) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
