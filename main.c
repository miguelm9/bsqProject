/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:19:18 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/24 20:21:36 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	char	array_mapa[get_lines(open_file(argv[1]))]
	[get_char(open_file(argv[1]))];
	argc = 2;
	if (is_everything_good(argv[1]))
		map_creator(open_file(argv[1]), array_mapa);
	else
		printf("Noo.");
	for  (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%c ", array_mapa[i][j]);
		printf("\n");
	}
	return (0);
}
