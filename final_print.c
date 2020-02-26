/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:25:51 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/26 19:50:34 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_it(char *map, char array[get_lines(map)][get_char(map)])
{
	int i;
	int j;

	i = 0;
	while (i < get_lines(map))
	{
		j = 0;
		while (j < get_char(map))
		{
			write(1, &array[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	fill_array_positions(char *map, int max_i, int max_j, int size)
{
	char	array[get_lines(map)][get_char(map)];
	int		min_i;
	int		min_j;

	map_creator(map, array);
	min_i = max_i - size + 1;
	while (min_i <= max_i)
	{
		min_j = max_j - size + 1;
		while (min_j <= max_j)
		{
			array[min_i][min_j] = get_full(map);
			min_j++;
		}
		min_i++;
	}
	print_it(map, array);
}
