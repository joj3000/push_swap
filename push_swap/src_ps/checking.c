/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:10:31 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 19:15:18 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_make2(int *pile1, int *pile2, char *line, t_index *n)
{
	if (ft_strcmp(line, "rr") == 0)
		i_rr(pile1, pile2, n);
	else if (ft_strcmp(line, "rra") == 0)
		i_rra(pile1, n);
	else if (ft_strcmp(line, "rrb") == 0)
		i_rrb(pile2, n);
	else if (ft_strcmp(line, "rrr") == 0)
		i_rrr(pile1, pile2, n);
	else
		return (0);
	return (1);
}

static int	ft_make(int *pile1, int *pile2, char *line, t_index *n)
{
	if (ft_strcmp(line, "sa") == 0)
		i_sa(pile1, n);
	else if (ft_strcmp(line, "sb") == 0)
		i_sb(pile2, n);
	else if (ft_strcmp(line, "ss") == 0)
		i_ss(pile1, pile2, n);
	else if (ft_strcmp(line, "pa") == 0)
		i_pa(pile1, pile2, n);
	else if (ft_strcmp(line, "pb") == 0)
		i_pb(pile1, pile2, n);
	else if (ft_strcmp(line, "ra") == 0)
		i_ra(pile1, n);
	else if (ft_strcmp(line, "rb") == 0)
		i_rb(pile2, n);
	else
		return (ft_make2(pile1, pile2, line, n));
	return (1);
}

static int	ft_check_sort(int *pile1, int argc, t_index n)
{
	int		i;

	i = 0;
	if (n.j != -1)
		return (0);
	while (i < argc - 1)
	{
		if (pile1[i] > pile1[i + 1])
			return (0);
		i++;
	}
	return (1);
}

static int	free_false(int *pile2, char *line)
{
	free(pile2);
	free(line);
	return (-1);
}

int			do_instr(int *pile1, int argc)
{
	int		*pile2;
	char	*line;
	t_index	n;

	n.i = 0;
	n.j = -1;
	n.argc = argc;
	if (!(pile2 = malloc(sizeof(int) * argc)))
		return (0);
	while (get_next_line(0, &line) == 1)
	{
		if (!(ft_make(pile1, pile2, line, &n)))
			return (free_false(pile2, line));
		free(line);
	}
	if (!(ft_check_sort(pile1, argc, n)))
	{
		free(pile1);
		free(pile2);
		return (0);
	}
	free(pile1);
	free(pile2);
	return (1);
}
