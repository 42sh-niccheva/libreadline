/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_history_line_start_with.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 10:40:15 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/13 13:31:50 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private_history.h"
#include "history.h"
#include "libft.h"

char				*get_history_line_start_with(const char *line)
{
	t_history_entry	*entry;
	t_list			*pos;

	entry = NULL;
	pos = (&(g_history->list))->prev;
	while (pos != &(g_history->list))
	{
		entry = LIST_ENTRY(pos, t_history_entry, list);
		if (ft_strstart_with(entry->line, line) == TRUE)
		{
			return (ft_strdup(entry->line));
		}
		pos = pos->prev;
	}
	return (NULL);
}
