/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:38:52 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 18:39:12 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;

	if (size >= 2147483647)
		return (NULL);
	if (!(str = (unsigned char*)malloc(sizeof(unsigned char) * (size + 1))))
		return (NULL);
	ft_memset(str, 0, size);
	return (&str[0]);
}
