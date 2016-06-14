/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_history_line_from.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 10:36:31 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/13 13:20:11 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private_history.h"
#include "history.h"
#include "libft.h"

char				*get_history_line_from(uint64_t index)
{
	t_history_entry	*entry;

	entry = get_history_entry_from(index);
	if (entry)
	{
		return (ft_strdup(entry->line));
	}
	return (NULL);
}
