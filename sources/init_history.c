/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_history.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 23:05:45 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/12 23:14:27 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private_history.h"
#include <stdlib.h>

void		init_history(void)
{
	g_history = NULL;
	g_history = (t_history_entry *)malloc(sizeof(*g_history));
	if (g_history)
	{
		g_history->line = NULL;
		init_list(&(g_history->list));
	}
}
