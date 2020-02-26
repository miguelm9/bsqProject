/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file_validity.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:21:27 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/26 19:02:22 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		has_open_correctly(int openf, int bytes_read)
{
	if (openf == -1 || bytes_read == 0)
		return (0);
	return (1);
}

char	*open_file(char *file_path)
{
	int		openf;
	int		bytes_read;
	char	*map;

	openf = open(file_path, O_RDONLY);
	map = (char*)malloc(100000000);
	bytes_read = read(openf, map, 100000000);
	has_open_correctly(openf, bytes_read);
	close(openf);
	return (map);
}

int		is_everything_good(char *file_path)
{
	char *map;

	map = open_file(file_path);
	if (are_lines_ok(map) && are_chars_same(map))
	{
		free(map);
		return (1);
	}
	return (0);
}
