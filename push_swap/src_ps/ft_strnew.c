/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:36:46 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 18:37:13 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strnew(size_t size)
{
	unsigned char	*str;

	if (!(str = ft_memalloc(size)))
		return (NULL);
	str[size] = '\0';
	return ((char*)&str[0]);
}
