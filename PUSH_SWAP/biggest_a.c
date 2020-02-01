/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:13:50 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/29 20:14:34 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	biggest_a(t_lst *lista)
{
	int flag;

	flag = -2147483648;
	while (lista)
	{
		if (lista->a > flag)
			flag = lista->a;
		lista = lista->next;
	}
	return (flag);
}
