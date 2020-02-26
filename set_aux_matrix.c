/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_aux_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:14:06 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/26 17:15:56 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	set_aux_matrix2(char *map, int aux[get_lines(map)][get_char(map)],
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
			if (array[i][j] == '1')
			{
				aux[i][j] = min(aux[i][j - 1], aux[i - 1][j],
						aux[i - 1][j - 1]) + 1;
			}
			else
				aux[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	set_aux_matrix(char *map, int aux[get_lines(map)][get_char(map)],
char array[get_lines(map)][get_char(map)])
{
	int i;
	int j;

	i = 0;
	while (i < get_lines(map))
	{
		aux[i][0] = (array[i][0] - '0');
		i++;
	}
	j = 0;
	while (j < get_char(map))
	{
		aux[0][j] = (array[0][j] - '0');
		j++;
	}
	set_aux_matrix2(map, aux, array);
}
