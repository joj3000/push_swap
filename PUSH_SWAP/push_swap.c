/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 16:27:01 by jerbs             #+#    #+#             */
/*   Updated: 2020/02/13 04:57:26 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		contains_space(char *s)
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

t_lst	*arg_list_creation(t_lst **lista, char **av)
{
	int i;

	i = 0;
	while (av[1][i] != 0 && av[1][i] != ' ')
		i++;
	while (av[1][i] != 0)
	{
		push_li_front(lista, ft_atol(&av[1][i]));
		i++;
		while (av[1][i] != 0 && av[1][i] != ' ')
			i++;
	}
	return (*lista);
}

t_lst	*create_lista(int ac, char **av)
{
	t_lst	*lista;
	t_lst	*listb;
	int		i;

	listb = NULL;
	lista = (t_lst *)malloc(sizeof(t_lst));
	lista->a = ft_atol(av[1]);
	lista->next = NULL;
	if (contains_space(av[1]) == 1)
		lista = arg_list_creation(&lista, av);
	else
	{
		i = 2;
		while (i < ac)
			push_ch_front(&lista, av[i++]);
	}
	return (lista);
}

int		main(int ac, char **av)
{
	t_lst	*lista;
	t_lst	*listb1;

	if (error_check(ac, av) == 0)
		return (0);
	listb1 = NULL;
	lista = create_lista(ac, av);
	if (is_a_sorted(lista) == 1)
	{
		lst_delboth(&lista, &listb1);
		return (0);
	}
	if (lst_size(lista) <= 3)
		size_3(&lista);
	else if (lst_size(lista) > 3 && lst_size(lista) <= 5)
		size_3_5(&lista, &listb1);
	else
		size_6_more(&lista, &listb1);
	lst_delboth(&lista, &listb1);
}
