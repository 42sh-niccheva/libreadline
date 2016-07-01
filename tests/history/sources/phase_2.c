/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phase_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 14:56:07 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/01 15:06:14 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_history.h"

#define PHASE "PHASE 2: "

void		phase_2(void)
{
	char	*s;

	s = get_history_line_at(10);
	if (ft_strcmp(s, "9"))
	{
		printf("%sget_history_line_at(10) is \"%s\", but expected %s\n",
			PHASE, s, "\"9\"");
	}
	ft_strdel(&s);
	s = get_history_line_from(10);
	if (ft_strcmp(s, "0"))
	{
		printf("%sget_history_line_from(10) is \"%s\", but expected %s\n",
			PHASE, s, "\"0\"");
	}
	ft_strdel(&s);
}
