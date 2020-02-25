/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_coincidences.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:39:36 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/25 18:40:42 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	search_coincidence(char *map,
char array_mapa[get_lines(map)][get_char(map)], int size)
{
	int a;
	int b;
	int i;
	int j;

	a = 0;
	b = 0;
	i = 0;
	j = 0;
	while (i < getlines(map))
	{
		while (j < get_char(map))
		{
			if (array_mapa[i][j] == get_empty(map))
			{
				while (a < size)
				{
					if (array_mapa[i][j + a] == get_empty(map) &&
					j <= (getchar(map) - size))
						a++;
					else
					{
						i += a;
						a = 0;
						j++;
					}
				}
			}
		}
	}
}

void checker(char *map, char array_mapa[getlines()][getchar()], int size)
{

}