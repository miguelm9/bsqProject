/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   are_chars_same.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:06:03 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/26 17:59:08 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	get_empty(char *map)
{
	char	empty;
	int		i;

	i = 0;
	empty = ' ';
	while (map[i] != '\n')
	{
		if (map[i] < 48 || map[i] > 57)
		{
			empty = map[i];
			break ;
		}
		i++;
	}
	return (empty);
}

char	get_full(char *map)
{
	char	full;
	int		i;

	i = 0;
	full = ' ';
	while (map[i] != '\n')
	{
		if (map[i] < 48 || map[i] > 57)
		{
			full = map[i + 2];
			break ;
		}
		i++;
	}
	return (full);
}

char	get_obstacle(char *map)
{
	char	obstacle;
	int		i;

	i = 0;
	obstacle = ' ';
	while (map[i] != '\n')
	{
		if (map[i] < 48 || map[i] > 57)
		{
			obstacle = map[i + 1];
			break ;
		}
		i++;
	}
	return (obstacle);
}

int		are_chars_same(char *map)
{
	char	empty;
	char	obst;
	int		i;

	empty = get_empty(map);
	obst = get_obstacle(map);
	i = 0;
	while (map[i] != '\n')
		i++;
	i++;
	while (map[i] != '\0')
	{
		if (map[i] != empty && map[i] != obst && map[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}
