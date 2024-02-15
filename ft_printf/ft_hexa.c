/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:36:18 by tmurua            #+#    #+#             */
/*   Updated: 2024/02/15 14:39:38 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_hexa(unsigned long n, char*b)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_hexa(n / 16, b);
		count += ft_hexa(n % 16, b);
	}
	else
		count += ft_putchar(b[n]);
	return (count);
}
