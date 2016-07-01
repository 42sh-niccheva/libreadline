/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phase_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 14:53:45 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/01 15:06:32 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_history.h"

#define PHASE "PHASE 1: "

void		phase_1(void)
{
	char	*s;

	s = get_history_line_at(1);
	if (ft_strcmp(s, "0"))
	{
		printf("%sget_history_line_at(1) is \"%s\", but expected %s\n",
			PHASE, s, "\"0\"");
	}
	ft_strdel(&s);
	s = get_history_line_from(1);
	if (ft_strcmp(s, "9"))
	{
		printf("%sget_history_line_from(1) is \"%s\", but expected %s\n",
			PHASE, s, "\"9\"");
	}
	ft_strdel(&s);
}
