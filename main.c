/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:19:18 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/24 19:25:01 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	printf("Lines: %d\n", get_lines(open_file(argv[1])));
	printf("Chars: %d\n", get_char(open_file(argv[1])));
	argc = 2;
	if (is_everything_good(argv[1]))
		printf("Yess");
	else
		printf("Noo.");
	return (0);
}
