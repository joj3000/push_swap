/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lower.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:12:51 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:13:33 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_lower(t_lst *listb, int n)
{
	while (listb->next)
	{
		if (listb->b >= n)
			return (0);
		listb = listb->next;
	}
	return (1);
}

/*
**int main()
**{
**	t_lst *lista;
**	t_lst *tmp;
**	t_lst *listb;
**
**	lista = (t_lst *)malloc(sizeof(t_lst));
**	tmp = (t_lst *)malloc(sizeof(t_lst));
**	listb = (t_lst *)malloc(sizeof(t_lst));
**
**	lista->b = 1;
**	tmp->b = 2;
**	listb->b = 3;
**
**	lista->next = NULL;
**	tmp->next = lista;
**	listb->next = tmp;
**
**	lst_print_ab(listb, 'b');
**
**	write(1, "\n", 1);
**
**	printf("%d\n", is_lower(listb, 4));
**}
*/
