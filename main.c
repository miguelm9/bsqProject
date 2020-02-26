/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:19:18 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/26 19:47:56 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	do_everyhing(char *file_path)
{
	char	array_mapa[get_lines(open_file(file_path))]

	[get_char(open_file(file_path))];
	if (is_everything_good(file_path))
	{
		map_creator(open_file(file_path), array_mapa);
		find_submatrix(open_file(file_path), array_mapa);
		write(1, "\n", 1);
	}
	else
		write(1, "map error\n", 11);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
	{
		read_from_console();
		write(1, "\n", 1);
		do_everyhing("console.txt");
	}
	else
	{
		while (i < argc)
		{
			do_everyhing(argv[i]);
			i++;
		}
	}
	return (0);
}
