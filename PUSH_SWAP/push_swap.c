/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 16:27:01 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 16:31:37 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_lst	*lista;
	t_lst	*listb1;

	if (error_check(ac, av) == 0)
		return (0);
	i = 2;
	listb1 = NULL;
	lista = (t_lst *)malloc(sizeof(t_lst));
	lista->a = ft_atol(av[1]);
	lista->next = NULL;
	while (i < ac)
		push_ch_front(&lista, av[i++]);
	if (is_a_sorted(lista) == 1)
		return (0);
	if (lst_size(lista) <= 3)
		size_3(&lista);
	else if (lst_size(lista) > 3 && lst_size(lista) <= 5)
		size_3_5(&lista, &listb1);
	else
		size_6_more(&lista, &listb1);
	lst_delboth(&lista, &listb1);
}
