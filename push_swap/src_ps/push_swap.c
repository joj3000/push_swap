/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:35:20 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 19:15:03 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_norminette(char **av, char **argv, int **pile, int argc)
{
	int		i;

	i = 0;
	if (!(av = ft_strsplit(argv[1], ' ')))
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	while (av[i] != 0)
		i++;
	if (!(*pile = ft_parsing_swap(i + 1, av)))
	{
		ft_free_double_tab(av);
		write(1, "Error\n", 19);
		exit(0);
	}
	argc = i + 1;
	ft_free_double_tab(av);
	return (argc);
}

int		main(int argc, char **argv)
{
	int		*pile;
	char	**av;

	av = NULL;
	if (argc == 1)
		write(1, "Error\n", 19);
	if (argc == 2)
		argc = ft_norminette(av, argv, &pile, argc);
	else
	{
		if (!(pile = ft_parsing(argc, argv)))
			return (write(1, "Error\n", 19));
	}
	ft_push_swap(pile, argc - 1);
	free(pile);
	return (0);
}
