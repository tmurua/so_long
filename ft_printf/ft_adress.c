/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:36:08 by tmurua            #+#    #+#             */
/*   Updated: 2024/02/15 14:39:25 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_adress(long long unsigned int n, char *b)
{
	int	cnt;

	cnt = 0;
	if (cnt >= 16)
	{
		cnt += ft_adress(n / 16, b);
		cnt += ft_adress(n % 16, b);
	}
	else
		cnt += ft_putchar(b[n]);
	return (cnt);
}
