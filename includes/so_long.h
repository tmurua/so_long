/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:42:43 by tmurua            #+#    #+#             */
/*   Updated: 2024/02/16 10:54:42 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include "get_next_line.h"
# include "mlx.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define END "\033[0m"

# define W_KEY 13
# define A_KEY 0
# define D_KEY 2
# define S_KEY 1
# define UP_KEY 126
# define LEFT_KEY 123
# define RIGHT_KEY 124
# define DOWN_KEY 125
# define ESC_KEY 53
# define ON_DESTROY 17

typedef struct s_map
{
	char	**map;
	char	*map_path;
	int		rows;
	int		cols;
	int		player_x;
	int		player_y;
	int		coin_counter;
	int		cnt_c;
	int		left_pos;
	void	*mlx_ptr;
	void	*mlx_win;
	void	*bg;
	void	*wll;
	void	*clt;
	void	*p;
	void	*e;
	void	*e2;
	int		is_open;
	int		i;
	int		j;
	int		counter;
	int		fd;
}			t_map;

typedef struct s_check_map
{
	int		cnt_pt;
	int		cnt_e;
	int		d;
	int		i;
	int		j;
}			t_check_map;

typedef struct s_valid_map
{
	int		col;
	int		check_maps;
	int		check;
	int		map_width;
	int		map_height;
	int		row;
}			t_valid_map;

int			count_lines(char *filename);
int			valid_map(t_map *all);
int			count_lines(char *filename);
void		get_map(char *file_name, t_map *all);
int			check_map(t_map *all);
void		move_down(t_map *all);
void		move_up(t_map *all);
void		move_left(t_map *all);
void		move_right(t_map *all);
void		draw_map(t_map *all);
void		draw_map1(t_map *all);
int			key_hook(int keycode, t_map *all);
void		banner(void);
void		win_banner(void);
void		coin_count(t_map *all);
int			check_file_ber(char *file_name);
void		exit_door(t_map *all);
int			on_destroy(void);
char		**copy_map(char **map);
void		check_map_rec(char **map, int play_x, int play_y);
int			map_path(char **map);
int			all_valid(t_map *all);
void		loop_map(t_map *all, int x, int y);
void		printf_message(char *msg);

#endif
