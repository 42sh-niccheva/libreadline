/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_history.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 10:17:13 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/14 11:45:11 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "history.h"
#include "private_history.h"
#include "list.h"

void				add_history(const char *line)
{
	t_history_entry	*entry;

	if (line)
	{
		entry = init_history_entry(line);
		if (entry)
		{
			list_add_tail(&(entry->list), &(g_history->list));
		}
		g_history_size += 1;
	}
}
