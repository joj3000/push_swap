/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biglowin_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:30:19 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/29 20:38:46 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	biglowin_a(t_lst *lista, int n)
{
	int low;
	int big;

	low = 0;
	big = 0;
	while (lista)
	{
		if (n > lista->a)
			big = 1;
		if (n < lista->a)
			low = 1;
		lista = lista->next;
	}
	if (low == 1 && big == 1)
		return (0);
	else if (low == 1)
		return (-1);
	else
		return (1);
}
