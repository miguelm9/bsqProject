/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:21:37 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/26 18:25:41 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdlib.h>
# include <fcntl.h>

int	are_lines_ok(char *map);
int	is_everything_good(char *file_path);
int	get_lines(char *map);
int	get_char(char *map);
char	*map_creator(char *map,
char array_mapa[get_lines(map)][get_char(map)]);
int	ft_atoi(char *str);
char	*open_file(char *file_path);
char	get_empty(char *map);
char	get_full(char *map);
char	get_obstacle(char *map);
int	are_chars_same(char *map);
void	set_aux_matrix(char *map, int aux[get_lines(map)][get_char(map)],
char array[get_lines(map)][get_char(map)]);
void	find_submatrix(char *map, char array[get_lines(map)][get_char(map)]);
int	min(int a, int b, int c);
void	fill_array_positions(char *map, int max_i, int max_j, int size);
void	read_from_console(void);

#endif
