/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lines_and_chars.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 18:26:04 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/24 19:18:52 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	get_lines(char *map)
{
	int		c;
	int		i;
	int		have_numbers;
	char	*num_lines;

	num_lines = (char*)malloc(1234444);
	c = 0;
	i = 0;
	have_numbers = 0;
	while (map[i] != '\n')
	{
		if (map[0] >= 48 && map[0] <= 57)
		{
			while (map[c] >= 48 && map[c] <= 57)
			{
				num_lines[c] = map[c];
				have_numbers++;
				c++;
			}
		}
		i++;
	}
	i = ft_atoi(num_lines);
	free(num_lines);
	return (i);
}

int	get_char(char *map)
{
	int chars;
	int i;

	i = 0;
	while (map[i] != '\n')
		i++;
	i++;
	while (map[i] != '\0')
	{
		chars = 0;
		if (map[i - 1] == '\n')
			while (map[i] != '\n')
			{
				chars++;
				i++;
			}
		i++;
	}
	return (chars);
}
