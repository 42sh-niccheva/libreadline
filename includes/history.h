/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   history.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 15:49:50 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/13 13:39:01 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HISTORY_H
# define HISTORY_H

# include "types.h"

/*
** This file provides some functions to manage history.
** - init_history() allow to initialize history.
** - add_history() allow to add a line to the global history.
** - get_history_size() allow to get the size of the history.
** - get_history_line_at() allow to get the line at index.
** - get_history_line_from() allow to get the line from index.
** - get_history_line_start_with() allow to get the last line starting
**   with string.
** - get_history_lines_start_with() allow to get the lines starting
**   with string.
** - clear_history() allow to clear history.
** - delete_history() allow to definitely delete the history.
*/

/*
** init_history is the function called for initialize the history.
** Must be called before all action with history.
** Warning: Don't call init_history while history is already initialized.
**          This can causes memory leaks or undefined behavior.
*/
void		init_history(void);

/*
** add_history function take a string parameter and push it back to the history
** list.
*/
void		add_history(const char *line);

/*
** get_history_size return the size of the history.
*/
uint64_t	get_history_size(void);

/*
** get_history_line_at take an index parameter and return the line which
** is at index.
*/
char		*get_history_line_at(uint64_t index);

/*
** get_history_line_from take an index parameter and return the line which
** is at index behind the tail of history.
** Warning: The string return is allocated with ft_strdup. For avoid memory
** leaks, please desallocated it with ft_strdel.
*/
char		*get_history_line_from(uint64_t index);

/*
** get_history_line_start_with take a string parameter and return the last line
** starting with the string parameter.
** Warning: The string return is allocated with ft_strdup. For avoid memory
** leaks, please desallocated it with ft_strdel.
*/
char		*get_history_line_start_with(const char *line);

/*
** get_history_lines_start_with take a string parameter and return an array of
** lines starting with the string parameter.
** Warning: The string return is allocated with ft_strdup. For avoid memory
** leaks, please desallocated it with ft_strdel.
*/
char		**get_history_lines_start_with(const char *line);

/*
** clear_history allow to clear each entry from history.
** After it called, the history size is 0.
*/
void		clear_history(void);

/*
** delete_history clear history and deinit the history.
** Must be called before exit to free all memory allocated for history.
** After it called, init_history must be recalled before all action with
** history.
** Warning: Don't call delete_history while history isn't initialized.
**          This can causes double free or undefined behavior.
*/
void		delete_history(void);

#endif
