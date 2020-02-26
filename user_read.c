/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:11:08 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/26 20:40:26 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	read_from_console(void)
{
	char	buf;
	int		fd;

	fd = open("console.txt", O_CREAT | O_RDWR | O_TRUNC, 0644);
	while (read(0, &buf, 1))
		write(fd, &buf, 1);
	close(fd);
}
