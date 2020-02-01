/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 10:33:58 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:14:29 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_size(t_lst *list)
{
	int		i;

	i = 0;
	if (!list || list == NULL)
		return (0);
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

/*
**int main()
**{
**	t_lst *a;
**	t_lst *b;
**	t_lst *c;
**
**	c = (t_lst *)malloc(sizeof(t_lst));
**	b = (t_lst *)malloc(sizeof(t_lst));
**	a = (t_lst *)malloc(sizeof(t_lst));
**
**	c = NULL;
**	a->a = 1;
**	b->a = 2;
**	c->a = 3;
**
***	c->next = NULL;
**	b->next = c;
**	a->next = b;
**
**	printf("%d\n",lst_count(c));
**}
*/
