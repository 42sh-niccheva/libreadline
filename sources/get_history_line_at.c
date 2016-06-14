/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_history_line_at.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 10:34:40 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/13 13:20:04 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private_history.h"
#include "history.h"
#include "libft.h"

char				*get_history_line_at(uint64_t index)
{
	t_history_entry	*entry;

	entry = get_history_entry_at(index);
	if (entry)
	{
		return (ft_strdup(entry->line));
	}
	return (NULL);
}
