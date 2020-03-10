/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:33:55 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 18:34:03 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_count_word(char const *str, int c)
{
	int		i;
	int		nb_word;

	nb_word = 0;
	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
				nb_word++;
			i++;
		}
	}
	return (nb_word);
}
