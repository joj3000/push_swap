/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:30:16 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 18:30:31 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*m1;
	unsigned char	*m2;

	m1 = (unsigned char*)s1;
	m2 = (unsigned char*)s2;
	i = 0;
	while (m1[i] != '\0' && m2[i] != '\0' && m1[i] == m2[i])
		i++;
	return ((unsigned int)(m1[i] - m2[i]));
}
