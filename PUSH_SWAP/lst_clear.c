/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:10:47 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/22 20:38:25 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_clear(t_lst **begin_list)
{
	if (lst_size(*begin_list) == 1)
		return ;
	if (*begin_list && (*begin_list)->next)
	{
		lst_clear(&(*begin_list)->next);
	}
	free(*begin_list);
	*begin_list = NULL;
}
