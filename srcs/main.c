/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:50:58 by tmurua            #+#    #+#             */
/*   Updated: 2024/02/15 14:51:47 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int argc, char **argv)
{
	t_map	all;
	int		xlen;
	int		ylen;

	all.fd = open("soccer.txt", O_RDONLY);
	if (argc != 2)
		printf_message("Miss Arg");
	all.is_open = ((all.map_path = argv[1]), 0);
	banner();
	check_file_ber(argv[1]);
	count_lines(argv[1]);
	get_map(argv[1], &all);
	valid_map(&all);
	check_map(&all);
	all_valid(&all);
	xlen = ((ylen = count_lines(all.map_path)), ft_strlen(all.map[0]));
	all.mlx_ptr = mlx_init();
	all.mlx_win = mlx_new_window(all.mlx_ptr, xlen * 50, ylen * 50, "so_long");
	draw_map(&all);
	draw_map1(&all);
	mlx_hook(all.mlx_win, 2, 0, key_hook, &all);
	mlx_hook(all.mlx_win, ON_DESTROY, 0, on_destroy, (void *)0);
	mlx_loop(all.mlx_ptr);
}
