/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_helper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:48:43 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 15:50:02 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cop(int *origine, int *tmp, int nb)
{
	int		i;

	i = 0;
	while (i < nb)
	{
		tmp[i] = origine[i];
		i++;
	}
}

int		ft_transcription(int *tmp, int *origine, int nb)
{
	int		i;
	int		j;
	int		*buff;

	if (!(buff = malloc(sizeof(int) * nb)))
		return (0);
	ft_cop(origine, buff, nb);
	i = 0;
	while (i < nb)
	{
		j = 0;
		while (tmp[i] != buff[j])
			j++;
		origine[j] = i;
		i++;
	}
	free(buff);
	return (1);
}

int		ft_is_in_tab(int *tmp, int len, int to_find)
{
	int		i;

	i = 0;
	while (i < len)
	{
		if (tmp[i] == to_find)
			return (1);
		i++;
	}
	return (0);
}

void	ft_put_instr(char *save, int s)
{
	int		i;

	i = 0;
	while (i < s)
	{
		if (save[i] == 1)
			write(1, "sa\n", 3);
		if (save[i] == 3)
			write(1, "pa\n", 3);
		if (save[i] == 4)
			write(1, "pb\n", 3);
		if (save[i] == 5)
			write(1, "ra\n", 3);
		if (save[i] == 6)
			write(1, "rb\n", 3);
		if (save[i] == 7)
			write(1, "rra\n", 4);
		if (save[i] == 8)
			write(1, "rrb\n", 4);
		if (save[i] == 9)
			write(1, "rrr\n", 4);
		if (save[i] == 10)
			write(1, "rr\n", 3);
		i++;
	}
}
