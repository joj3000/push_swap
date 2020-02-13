/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 20:39:23 by jerbs             #+#    #+#             */
/*   Updated: 2020/02/13 04:57:53 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		contains_space(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

static int		contains_good(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= '0' && s[i] <= '9') || s[i] == ' '
			|| s[i] == '-')
			i++;
		else
			return (0);
	}
	return (1);
}

int				space_count(char *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == ' ')
			count++;
		i++;
	}
	return (count);
}

static int		is_dup(char *s)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 1;
	if (space_count(s) == 0)
		return (0);
	tab = ft_strsplit(s, ' ');
	while (i <= space_count(s))
	{
		while (j <= space_count(s))
		{
			if (ft_strcmp(tab[i], tab[j]) == 0)
			{
				free_tab(tab, s);
				return (1);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	free_tab(tab, s);
	return (0);
}

int				error_check(int ac, char **av)
{
	if (ac <= 1)
		return (0);
	if (ac == 2 && contains_space(av[1]) == 1)
	{
		if (contains_good(av[1]) == 0 || is_dup(av[1]) == 1)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		return (1);
	}
	if (is_number(ac, av) == 0
	|| is_integer(ac, av) == 0
	|| is_duplicate(ac, av) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
