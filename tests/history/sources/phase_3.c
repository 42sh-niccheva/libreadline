/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phase_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 15:00:12 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/01 15:13:05 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_history.h"

#define PHASE "PHASE 3: "

void		phase_3(void)
{
	uint64_t	size;

	size = get_history_size();
	if (size != 10)
	{
		printf("%sget_history_size() is %llu, but expected %d\n",
			PHASE, size, 10);
	}
	clear_history();
	size = get_history_size();
	if (size != 0)
	{
		printf("%sget_history_size() is %llu, but expected %d\n",
			PHASE, size, 0);
	}
}
