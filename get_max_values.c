/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_values.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:05:25 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/25 20:05:25 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void change_to_num(char *map, char aux[get_lines(map)]
[get_char(map)])
{
	int i;
	int j;

	i = 0;
	while (i < get_lines(map))
	{
		j = 0;
		while (j < get_char(map))
		{
			
			j++;
		}
		
		i++;
	}
	
}

int	min(char a, char b, char c, char *map)
{
	char *m;

	m = (char*)malloc(1);
	m[0] = ' ';
	a = (a == get_empty(map)) ? '1' : '0';
	c = (c == get_empty(map)) ? '1' : '0';
	b = (b == get_empty(map)) ? '1' : '0';
	m[0] = a;
	if (m[0] > b)
		m[0] = b;
	if (m[0] > c)
		m[0] = c;
	return (ft_atoi(m));
}

int	get_coordinates(char *map, char aux[get_lines(map)]
[get_char(map)], int max_i, int max_j)
{
	int max_of_s;
	int i;
	int j;

	i = 0;
	max_of_s = aux[0][0];
	max_i = 0;
	max_j = 0;
	while (i < get_lines(map))
	{
		j = 0;
		while (j < get_char(map))
		{
			if (max_of_s < aux[i][j])
			{
				max_of_s = aux[i][j];
				max_i = i;
				max_j = j;
			}
			j++;
		}
		i++;
	}
	return (max_of_s);
}

void	find_submatrix(char *map, char array[get_lines(map)][get_char(map)])
{
	int i;
	int j;
	char aux[get_lines(map)][get_char(map)];
	int max_of_s;
	int max_i = 0;
	int max_j = 0;

	set_aux_matrix(map, aux, array);
	printf("Sub matrix after the min function:\n");
	for(i = 0; i < get_lines(map); i++)
	{
		for (j = 0; j < get_char(map); j++)
			printf("%c ", aux[i][j]);
		printf("\n");
	}

	/* Find the maximum entry, and indexes of maximum entry 
		in S[][] */
	max_of_s = get_coordinates(map, aux, max_i, max_j);

	// printf("Maximum size sub-matrix is: \n"); 
	// for(i = max_i; i > max_i - max_of_s; i--) 
	// { 
	// 	for(j = max_j; j > max_j - max_of_s; j--) 
	// 	{ 
	// 	printf("%c ", array[i][j]); 
	// 	} 
	// 	printf("\n");
	// }
	printf("--> Max i: %d\n", max_i);
	printf("--> Max j: %d\n", max_j);
}
