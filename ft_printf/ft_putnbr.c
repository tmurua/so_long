/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:37:24 by tmurua            #+#    #+#             */
/*   Updated: 2024/02/15 14:39:33 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int n)
	{
	int	counter;

	counter = 0;
	if (n < 0)
	{
			counter += ft_putchar('-');
			n *= -1;
	}
	if (n > 9)
		counter += ft_putnbr(n / 10);
	counter += ft_putchar((n % 10) + '0');
	return (counter);
}
