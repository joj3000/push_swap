/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 15:49:02 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 16:34:36 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	size_3(t_lst **lista)
{
	if (lst_size(*lista) == 2)
		sa_swap_a(*lista);
	else if (lst_size(*lista) == 3)
		case_3(lista);
}
