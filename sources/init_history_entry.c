/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_history_entry.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 23:20:08 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/12 23:23:20 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private_history.h"
#include "libft.h"
#include <stdlib.h>

t_history_entry		*init_history_entry(const char *line)
{
	t_history_entry	*entry;

	entry = NULL;
	if (line)
	{
		entry = (t_history_entry *)malloc(sizeof(*entry));
		if (entry)
		{
			entry->line = ft_strdup(line);
			init_list(&(entry->list));
		}
	}
	return (entry);
}
