/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_values.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:05:25 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/26 17:59:22 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	change_to_num(char *map,
char array[get_lines(map)][get_char(map)])
{
	int i;
	int j;

	i = 0;
	while (i < get_lines(map))
	{
		j = 0;
		while (j < get_char(map))
		{
			if (array[i][j] == get_empty(map))
				array[i][j] = '1';
			else
				array[i][j] = '0';
			j++;
		}
		i++;
	}
}

int	min(int a, int b, int c)
{
	int m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

int	get_coordinates(char *map, int aux[get_lines(map)]
[get_char(map)], int max_i, int max_j)
{
	int max_of_s;
	int i;
	int j;

	i = 0;
	max_of_s = aux[0][0];
	max_i = 0;
	max_j = 0;
	while (i < get_lines(map))
	{
		j = 0;
		while (j < get_char(map))
		{
			if (max_of_s < aux[i][j])
			{
				max_of_s = aux[i][j];
				max_i = i;
				max_j = j;
			}
			j++;
		}
		i++;
	}
	fill_array_positions(map, max_i, max_j, max_of_s);
	return (max_of_s);
}

void	find_submatrix(char *map, char array[get_lines(map)][get_char(map)])
{
	int aux[get_lines(map)][get_char(map)];
	int max_of_s;
	int max_i;
	int max_j;

	max_i = 0;
	max_j = 0;
	change_to_num(map, array);
	set_aux_matrix(map, aux, array);
	max_of_s = get_coordinates(map, aux, max_i, max_j);
}
