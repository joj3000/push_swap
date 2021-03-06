/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:35:43 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 18:36:01 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int			ft_eol(char const *s, int c)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0' && s[i] != (char)c && s[i] != EOF)
			i++;
		return (i);
	}
	return (0);
}

static int			copy(int fd, char **save, char *tmp)
{
	char	*l;
	size_t	end;

	if (!(l = ft_strnew(BUFF_SIZE)))
		return (0);
	while ((end = read(fd, l, BUFF_SIZE)))
	{
		if ((int)end == -1)
			return (0);
		if (!(tmp = ft_strsub(*save, 0, ft_strlen_p(*save))))
			return (0);
		ft_strdel(save);
		if (!(*save = ft_strsub(tmp, 0, ft_strlen_p(tmp) + BUFF_SIZE)))
			return (0);
		ft_strdel(&tmp);
		ft_strncat(*save, l, end);
	}
	ft_strdel(&l);
	return (1);
}

static t_gnl_list	*ft_ajout(int fd, t_gnl_list *ajout, \
				char *tmp, t_gnl_list **cursor)
{
	if (!(copy(fd, (char**)&ajout->data, tmp)))
		return (NULL);
	ajout->fd = fd;
	if (*cursor)
		(*cursor)->next = ajout;
	return (ajout);
}

static t_gnl_list	*ft_list(t_gnl_list **begin_list, int fd, char *tmp)
{
	t_gnl_list	*cursor;
	t_gnl_list	*ajout;

	cursor = *begin_list;
	if (cursor)
	{
		while (cursor->next != *begin_list && cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = *begin_list;
		cursor = cursor->next;
		if (cursor->fd == fd)
			return (cursor);
		while (cursor->next != *begin_list)
		{
			cursor = cursor->next;
			if (cursor->fd == fd)
				return (cursor);
		}
	}
	if (!(ajout = ft_memalloc(sizeof(t_gnl_list))))
		return (NULL);
	if (!(ajout = ft_ajout(fd, ajout, tmp, &cursor)))
		return (NULL);
	ajout->next = *begin_list;
	return (ajout);
}

int					get_next_line(const int fd, char **line)
{
	static t_gnl_list	*list;
	char				*tmp;

	tmp = NULL;
	if (!(list = ft_list(&list, fd, tmp)))
		return (-1);
	if (list->data == NULL)
		return (0);
	if (list->data[0] == '\0')
	{
		*line = NULL;
		return (0);
	}
	if (!(*line = ft_strnew(ft_eol(list->data, '\n'))))
		return (-1);
	ft_strncpy(*line, list->data, (ft_eol(list->data, '\n')));
	if (!(tmp = ft_strsub(list->data, ft_eol(list->data, '\n') + 1 \
					, ft_strlen_p(list->data) - ft_eol(list->data, '\n'))))
		return (-1);
	ft_strdel(&(list->data));
	if (!(list->data = ft_strnew(ft_strlen_p(tmp))))
		return (-1);
	ft_strcpy_p(list->data, tmp);
	ft_strdel(&tmp);
	return (1);
}
