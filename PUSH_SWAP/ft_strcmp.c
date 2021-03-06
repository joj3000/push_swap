/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 13:02:24 by jerbs             #+#    #+#             */
/*   Updated: 2020/02/13 03:52:36 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	char	*c_s1;
	char	*c_s2;

	i = 0;
	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
	while (c_s1[i] == c_s2[i] && c_s1[i] != 0 && c_s2[i] != 0)
		i++;
	return (c_s1[i] - c_s2[i]);
}
