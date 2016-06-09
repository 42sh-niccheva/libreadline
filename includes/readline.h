/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readline.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 18:58:50 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/09 21:15:33 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READLINE_H
# define READLINE_H

typedef void	(t_command_func)(int, int);

char			*readline(const char *prompt);
void			add_history(const char *line);
int				rl_bind_key(int key, t_command_func *function);

#endif
