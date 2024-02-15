/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:36:52 by tmurua            #+#    #+#             */
/*   Updated: 2024/02/15 14:39:36 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putnbr(long int n);
int	ft_putstr(char *ch);
int	ft_printf(const char *str, ...);
int	ft_putnbru(unsigned int nb);
int	ft_hexa(unsigned long n, char*b);
int	ft_adress(long long unsigned int n, char *b);

#endif
