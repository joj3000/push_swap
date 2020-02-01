/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowest_bef_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:43:23 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 19:56:26 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lowest_bef_a(t_lst *lista, int n)
{
	int flag;

	flag = -2147483648;
	while (lista)
	{
		if (lista->a < n && flag < lista->a)
			flag = lista->a;
		lista = lista->next;
	}
	return (flag);
}
