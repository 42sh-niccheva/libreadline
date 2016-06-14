/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_history_entry.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 23:24:51 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/14 12:05:59 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private_history.h"
#include "libft.h"
#include <stdlib.h>

void		delete_history_entry(t_history_entry *entry)
{
	if (entry)
	{
		ft_strdel(&(entry->line));
		list_del(&(entry->list));
		g_history_size -= 1;
		free(entry);
	}
}
