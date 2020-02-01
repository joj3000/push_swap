/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highest_af_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 21:22:07 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 19:49:21 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	highest_af_a(t_lst *lista, int n)
{
	int flag;

	flag = 2147483647;
	while (lista)
	{
		if (lista->a > n && flag > lista->a)
			flag = lista->a;
		lista = lista->next;
	}
	return (flag);
}
