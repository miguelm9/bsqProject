/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   are_chars_same.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:06:03 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/26 20:03:19 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	get_empty(char *map)
{
	int		i;

	i = 0;
	while (map[i] != '\n')
		i++;
	return (map[i - 3]);
}

char	get_full(char *map)
{
	int		i;

	i = 0;
	while (map[i] != '\n')
		i++;
	return (map[i - 1]);
}

char	get_obstacle(char *map)
{
	int		i;

	i = 0;
	while (map[i] != '\n')
		i++;
	return (map[i - 2]);
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
