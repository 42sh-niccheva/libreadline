/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phase_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 15:00:12 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/01 17:04:36 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_history.h"

#define PHASE "PHASE 4: "

static void	init()
{
	clear_history();
	add_history("ls -la");
	add_history("ls");
	add_history("mkdir folder");
	add_history("ls -lhGa test");
	add_history("cd /tmp");
}

void		phase_4(void)
{
	char	*search;

	init();
	search = get_history_line_start_with("ls");
	if (ft_strcmp(search, "ls -lhGa test"))
	{
		printf("%sget_history_line_start_with(\"ls\") is %s, but expected %s\n",
			PHASE, search, "\"ls -lhGa test\"");
	}
	ft_strdel(&search);
	search = get_history_line_start_with("grep");
	if (search)
	{
		printf("%sget_history_line_start_with(\"grep\") is %s, but expected %s\n",
			PHASE, search, "NULL");
	}
	ft_strdel(&search);
}
