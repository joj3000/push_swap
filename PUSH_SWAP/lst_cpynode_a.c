/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_cpynode_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 22:00:55 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 19:50:15 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*lst_cpynode_a(t_lst *list)
{
	t_lst *cpy;

	cpy = (t_lst *)malloc(sizeof(t_lst));
	cpy->a = list->a;
	cpy->next = NULL;
	return (cpy);
}
/*
**int main()
**{
**	t_lst *oui;
**	oui = (t_lst *)malloc(sizeof(t_lst));
**	oui->a = 1;
**	printf("%d\n", lst_cpynode_a(oui)->a);
**}
*/
