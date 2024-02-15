/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:36:39 by tmurua            #+#    #+#             */
/*   Updated: 2024/02/15 14:39:37 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	check(va_list list, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, int)));
	else if (c == 'p')
	{
		ft_putstr("0x");
		return (ft_hexa(va_arg(list, unsigned long), "0123456789abcdef") + 2);
	}
	else if (c == 'x')
		return (ft_hexa(va_arg(list, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_hexa(va_arg(list, unsigned int), "0123456789ABCDEF"));
	else if (c == 'u')
		return (ft_putnbru(va_arg(list, long unsigned int)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		c;
	va_list	ptr;

	i = 0;
	c = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
			c += ft_putchar('%');
			c += check(ptr, str[i]);
		}
		else
			c += ft_putchar(str[i]);
			i++;
	}
	va_end(ptr);
	return (c);
}
// int main()
// {
//     printf("5d");
// }
