/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highest_af.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 13:43:50 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 19:51:56 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	highest_af(t_lst *listb, int n)
{
	int flag;

	flag = 2147483647;
	while (listb)
	{
		if (listb->b > n && flag > listb->b)
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
**	tmp->b = 2;
**	listb->b = 59;
**
**	lista->next = NULL;
**	tmp->next = lista;
**	listb->next = tmp;
**
**
**	printf("%d\n", highest_af(listb, 59));
**	lst_print_ab(lista, 'a');
**
**}
*/
