/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 02:53:15 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/25 00:53:22 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int		main(int ac, char *av[])
{
	(void)av;
	if (ac < 2)
		print_usage();
	else
	{
		init_config();
		reset_config();
	}
	return (0);
}
