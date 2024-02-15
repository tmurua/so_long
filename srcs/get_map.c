/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:50:51 by tmurua            #+#    #+#             */
/*   Updated: 2024/02/15 14:51:50 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	func3(int fd, char *getstore)
{
	if (fd == -1)
		ft_printf("%sERROR : Failed to open file %s\n", RED, END);
	if (!getstore)
		printf_message("ERROR : Empty MAP");
	if (getstore[0] == '\n')
		ft_printf("%sERROR : There is a Empty String on MAP%s\n", RED, END);
	if (getstore[0] == '\n')
		exit(0);
}

void	get_map(char *file_name, t_map *all)
{
	int		fd;
	char	*line;
	int		i;
	char	*getstore;

	all->map = NULL;
	fd = open(file_name, O_RDONLY);
	getstore = get_next_line(fd);
	func3(fd, getstore);
	all->cols = ft_strlen(getstore);
	i = 1;
	while (getstore != NULL)
	{
		line = ft_strjoin_v2(line, getstore);
		free(getstore);
		getstore = get_next_line(fd);
		if (getstore && getstore[0] == '\n')
			printf_message("ERROR : There is a \\n on The MAP");
		i++;
	}
	all->rows = i;
	all->map = ft_split(line, '\n');
	close(fd);
	free(line);
}
