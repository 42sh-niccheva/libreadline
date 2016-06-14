/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_history_entry_from.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 10:13:27 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/14 13:57:37 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private_history.h"
#include "list.h"
#include <stdlib.h>

t_history_entry		*get_history_entry_from(uint64_t index)
{
	uint64_t		reverse_index;
	t_history_entry	*entry;
	t_list			*pos;
	uint64_t		i;

	if (!index || index > g_history_size + 1)
		return (NULL);
	reverse_index = (g_history_size + 1) - index;
	entry = NULL;
	if (reverse_index < index)
	{
		return (get_history_entry_at(reverse_index));
	}
	else
	{
		pos = (&(g_history->list))->prev;
		i = 1;
		while (pos != &(g_history->list) && i < index)
		{
			i++;
			pos = pos->prev;
		}
		entry = LIST_ENTRY(pos, t_history_entry, list);
	}
	return (entry);
}
