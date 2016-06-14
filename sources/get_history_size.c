/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_history_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 10:21:51 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/13 13:20:21 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "history.h"
#include "private_history.h"

uint64_t		get_history_size(void)
{
	return (g_history_size);
}
