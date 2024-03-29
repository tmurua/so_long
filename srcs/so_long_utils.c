/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:51:13 by tmurua            #+#    #+#             */
/*   Updated: 2024/02/15 14:51:43 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	count_lines(char *filename)
{
	int		fd;
	int		lines;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	lines = 0;
	line = get_next_line(fd);
	while (line)
	{
		lines++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (lines);
}

void	exit_door(t_map *all)
{
	win_banner();
	ft_printf("%s\t\t\t\t\t\t\t\t NOW U ARE READY TO WIN THE WAR !!!%s\n", RED,
		END);
	ft_printf("%s\t\t\t\t\t\t\t YOUR SCORE : *- %d -* %s\n\n", GREEN,
		all->counter, END);
	exit(0);
}
