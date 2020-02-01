/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 22:14:16 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/22 22:16:09 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*lst_new_a(int i)
{
	t_lst *new;

	new = (t_lst *)malloc(sizeof(t_lst));
	new->a = i;
	new->next = NULL;
	return (new);
}
