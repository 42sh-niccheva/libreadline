/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_history.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 22:21:28 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/14 10:54:53 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRIVATE_HISTORY_H
# define PRIVATE_HISTORY_H

# include "list.h"
# include "types.h"

typedef struct s_hist_entry	t_history_entry;

struct						s_hist_entry
{
	char					*line;
	t_list					list;
};

t_history_entry				*g_history;
uint64_t					g_history_size;

t_history_entry				*init_history_entry(const char *line);
void						delete_history_entry(t_history_entry *entry);

t_history_entry				*get_history_entry_at(uint64_t index);
t_history_entry				*get_history_entry_from(uint64_t index);

#endif
