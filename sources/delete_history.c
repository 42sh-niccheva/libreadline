/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_history.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 10:40:34 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/14 10:41:50 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private_history.h"
#include "history.h"
#include <stdlib.h>

void		delete_history(void)
{
	clear_history();
	free(g_history);
	g_history = NULL;
}
