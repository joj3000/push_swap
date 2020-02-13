/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 04:00:57 by jerbs             #+#    #+#             */
/*   Updated: 2020/02/13 04:18:38 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

static int		space_count(char *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == ' ')
			count++;
		i++;
	}
	return (count);
}

void			free_tab(char **tab, char *s)
{
	int i;

	i = 0;
	while (i <= space_count(s))
	{
		free(tab[i]);
		tab[i] = NULL;
		i++;
	}
	free(tab);
	tab = NULL;
}

/*
**int main()
**{
**	char *s;
**	char *t;
**	char *o;
**	o = "1234 56789";
**
**	char **tab;
**	tab = (char **)malloc(sizeof(char *) * 2);
**
**	s = strdup("1234");
**	t = strdup("56789");
**
**	tab[0] = s;
**	tab[1] = t;
**
**	int i = 0;
**	while (i < 2)
**		printf("%s\n", tab[i++]);
**
**	free_tab(tab, o);
**
**	i = 0;
**	while (i < 2)
**		printf("%s\n", tab[i++]);
**
**}
*/
