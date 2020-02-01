/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowest.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:41:08 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 16:29:02 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lowest(t_lst *listb)
{
	int flag;

	flag = 2147483647;
	while (listb)
	{
		if (listb->b < flag)
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
**	lista = (t_lst *)malloc(sizeof(t_lst));
**	tmp = (t_lst *)malloc(sizeof(t_lst));
**	listb = (t_lst *)malloc(sizeof(t_lst));
**	lista->b = 9;
**	tmp->b = 23;
**	listb->b = -9;
**	lista->next = NULL;
**	tmp->next = lista;
**	listb->next = tmp;
**	printf("%d\n", lowest(listb));
**	//lst_print_ab(lista, 'a');
**}
*/
