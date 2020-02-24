/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_creator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:08:49 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/24 20:23:49 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		remove_param_line(char *map, int i)
{
	while (map[i] != '\n')
		i++;
	i++;
	return (i);
}

char	*map_creator(char *map,
char array_mapa[get_lines(map)][get_char(map)])
{
	char	*ptr;
	int		i;
	int		j;
	int		x;

	x = 0;
	i = 0;
	ptr = (char*)malloc(234567);
	i = remove_param_line(map, i);
	while (x < get_lines(map) && map[i] != '\0')
	{
		j = 0;
		while (j < get_char(map))
		{
			if (map[i] != '\n')
				array_mapa[x][j] = map[i];
			j++;
			i++;
		}
		x++;
		i++;
	}
	ptr = &array_mapa[0][0];
	return (ptr);
}
