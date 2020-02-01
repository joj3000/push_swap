/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:00:18 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/27 17:04:15 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int		ft_atol(char *str)
{
	int			i;
	long int	neg;
	long int	nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ') && str[i])
		i++;
	if (str[i] == '-' && str[i])
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] >= 48 && str[i] <= 57))
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (neg * nb);
}

/*
**int main()
**{
**	printf("%ld\n", ft_atol("-621474836495"));
**}
*/
