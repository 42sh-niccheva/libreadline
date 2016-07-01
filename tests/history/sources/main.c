/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 14:02:31 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/01 15:09:15 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_history.h"

void		init(void)
{
	init_history();
	add_history("0");
	add_history("1");
	add_history("2");
	add_history("3");
	add_history("4");
	add_history("5");
	add_history("6");
	add_history("7");
	add_history("8");
	add_history("9");
}

int			main(void)
{
	init();
	phase_1();
	phase_2();
	phase_3();
	delete_history();
	return (0);
}
