/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:19:18 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/26 19:05:16 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	int i;

	i = 1;
	// if (argc == 1)
	// {
	// 	read_from_console();
	// 	char	array_mapa[get_lines(open_file("console.txt"))]
	// 	[get_char(open_file("console.txt"))];
	// 	if (is_everything_good("console.txt"))
	// 	{
	// 		map_creator(open_file("console.txt"), array_mapa);
	// 		find_submatrix(open_file("console.txt"), array_mapa);
	// 		write(1, "\n", 1);
	// 	}
	// 	else
	// 		write(1, "map error\n", 11);
	// }
	// else
	// {
		while (i < argc)
		{
			char	array_mapa[get_lines(open_file(argv[i]))]
			[get_char(open_file(argv[i]))];
			if (is_everything_good(argv[i]))
			{
				map_creator(open_file(argv[i]), array_mapa);
				find_submatrix(open_file(argv[i]), array_mapa);
				write(1, "\n", 1);
			}
			else
				write(1, "map error\n", 11);
			i++;
		}
	//}
	return (0);
}
