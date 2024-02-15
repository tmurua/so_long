/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:37:30 by tmurua            #+#    #+#             */
/*   Updated: 2024/02/15 14:39:30 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_putstr(char *ch)
{
	int	i;

	i = 0;
	if (!ch)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (ch[i] != '\0')
	{
		write (1, &ch[i], 1);
		i++;
	}
	return (i);
}
