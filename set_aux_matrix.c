/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_aux_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:14:06 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/25 19:54:27 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	set_aux_matrix2(char *map, char aux[get_lines(map)][get_char(map)],
char array[get_lines(map)][get_char(map)])
{
	int i;
	int j;

	i = 1;
	while (i < get_lines(map))
	{
		j = 1;
		while (j < get_char(map))
		{
			if (array[i][j] == get_empty(map))
				aux[i][j] = min(aux[i][j - 1], aux[i - 1][j],
				aux[i - 1][j - 1], map) + 1;
			else
				aux[i][j] = get_obstacle(map);
			j++;
		}
		i++;
	}
}

void	set_aux_matrix(char *map, char aux[get_lines(map)][get_char(map)],
char array[get_lines(map)][get_char(map)])
{
	int i;
	int j;

	i = 0;
	while (i < get_lines(map))
	{
		aux[i][0] = array[i][0];
		i++;
	}
	j = 0;
	while (j < get_char(map))
	{
		aux[0][j] = array[0][j];
		j++;
	}
	i = 1;
	j = 1;
	set_aux_matrix2(map, aux, array);
}
