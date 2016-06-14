/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_history.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 10:27:33 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/14 12:11:36 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private_history.h"
#include "history.h"
#include <stdlib.h>
#include <stdio.h>

void				clear_history(void)
{
	t_history_entry	*entry;
	t_list			*pos;

	pos = (&(g_history->list));
	while (g_history_size)
	{
		entry = LIST_FIRST_ENTRY(pos, t_history_entry, list);
		delete_history_entry(entry);
	}
}
