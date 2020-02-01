/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowest_bef.cv                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:22:01 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:30:05 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lowest_bef(t_lst *listb, int n)
{
	int flag;

	flag = -2147483648;
	while (listb)
	{
		if (listb->b < n && flag < listb->b)
			flag = listb->b;
		listb = listb->next;
	}
	return (flag);
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
**	tmp->b = 23;
**	listb->b = 59;
**
**	lista->next = NULL;
**	tmp->next = lista;
**	listb->next = tmp;
**
**	printf("%d\n", is_lowest_before(listb, 22));
**
**	lst_print_ab(lista, 'a');
**
**}
*/
