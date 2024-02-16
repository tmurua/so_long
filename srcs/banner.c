/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   banner.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:50:42 by tmurua            #+#    #+#             */
/*   Updated: 2024/02/16 12:52:16 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	banner(void)
{
	ft_printf("\n");
	ft_printf("%s\t\t --* so_long *--%s\n", YELLOW, END);
}

void	win_banner(void)
{
	ft_printf("\n");
	ft_printf("%s\t\t\t\t\t\t         GOOD JOB %s\n\n", YELLOW, END);
	ft_printf("%s  \t\t\t\t\t\t\t█▄█ █▀█  █░█  █░█░█ █ █▄░█\n", GREEN);
	ft_printf("    \t\t\t\t\t\t\t █  █▄█  █▄█  ▀▄▀▄▀ █ █░▀█%s\n\n", END);
}
