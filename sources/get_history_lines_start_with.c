/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_history_lines_start_with.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 14:56:15 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/14 10:27:07 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private_history.h"
#include "history.h"
#include "libft.h"
#include <stdlib.h>

static uint64_t		count_occur(const char *line)
{
	uint64_t		count;
	t_history_entry	*entry;
	t_list			*pos;

	count = 0;
	pos = (&(g_history->list))->next;
	while (pos != &(g_history->list))
	{
		entry = LIST_ENTRY(pos, t_history_entry, list);
		if (entry && ft_strstart_with(entry->line, line))
			++count;
		pos = pos->next;
	}
	return (count);
}

char				**get_history_lines_start_with(const char *line)
{
	char			**tab;
	uint64_t		count;
	t_history_entry	*entry;
	t_list			*pos;

	if (line)
	{
		count = count_occur(line);
		tab = (char **)malloc(sizeof(*tab) * (count + 1));
		if (tab)
		{
			tab[count] = NULL;
			pos = (&(g_history->list))->next;
			while (pos != &(g_history->list) && count)
			{
				entry = LIST_ENTRY(pos, t_history_entry, list);
				if (entry && ft_strstart_with(entry->line, line))
					tab[--count] = ft_strdup(entry->line);
				pos = pos->next;
			}
			return (tab);
		}
	}
	return (NULL);
}
