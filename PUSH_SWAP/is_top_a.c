/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_top_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 21:10:39 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/29 21:10:58 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_top_a(t_lst *lista, int n)
{
	while (lista->next)
		lista = lista->next;
	if (lista->a == n)
		return (1);
	return (0);
}
