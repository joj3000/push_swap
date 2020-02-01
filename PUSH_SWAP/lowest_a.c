/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowest_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:39:06 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/29 20:39:32 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lowest_a(t_lst *lista)
{
	int flag;

	flag = 2147483647;
	while (lista)
	{
		if (lista->a < flag)
			flag = lista->a;
		lista = lista->next;
	}
	return (flag);
}
