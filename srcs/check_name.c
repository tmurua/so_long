/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_name.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:50:47 by tmurua            #+#    #+#             */
/*   Updated: 2024/02/15 14:51:52 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_file_ber(char *file_name)
{
	int	len;

	len = ft_strlen(file_name);
	if (ft_strncmp(file_name + (len - 4), ".ber", 4) == 0)
		return (1);
	else
	{
		ft_printf("%sERROR : The string does not end with .ber%s\n", RED, END);
		exit(1);
	}
	return (0);
}
