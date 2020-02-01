/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:25:34 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/28 19:50:31 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	biggest(t_lst *listb)
{
	int flag;

	flag = -2147483648;
	while (listb)
	{
		if (listb->b > flag)
			flag = listb->b;
		listb = listb->next;
	}
	return (flag);
}
