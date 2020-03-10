/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorttab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:29:29 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 18:29:44 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorttab(int *s, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	int				buffer;

	j = 0;
	i = 0;
	if (s)
	{
		while (i < n)
		{
			while (j < (n - 1))
			{
				if (s[j] > s[j + 1])
				{
					buffer = s[j];
					s[j] = s[j + 1];
					s[j + 1] = buffer;
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
}
