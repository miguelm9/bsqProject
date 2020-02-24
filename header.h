/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:21:37 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/24 19:19:09 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdlib.h>
# include <fcntl.h>

int	are_lines_ok(char *map);
int	is_everything_good(char *file_path);
int	map_creator(char *map);
int	ft_atoi(char *str);
int	get_lines(char *map);
int	get_char(char *map);
char	*open_file(char *file_path);

#endif
