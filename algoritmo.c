/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritmo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:44:07 by mmartin           #+#    #+#             */
/*   Updated: 2020/02/25 19:36:34 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C code for Maximum size square 
// sub-matrix with all 1s 
#include<stdio.h> 
#include "header.h"
#define bool int 
#define R 7
#define C 7

/* Driver function to test above functions */
int main() 
{ 
bool M[R][C] = {{0, 1, 1, 1, 1, 1, 1}, 
				{1, 1, 1, 1, 1 ,1, 1}, 
				{0, 1, 1, 1, 1, 1, 1},
				{0, 1, 1, 1, 1, 1, 1}, 
				{1, 1, 1, 1, 1, 1, 1}, 
				{0, 1, 1, 1, 1, 0, 0},
				{0, 1, 1, 1, 1, 0, 0}};
				
printMaxSubSquare(M);
}

void get_last_coord(int m_i, int m_j, char *argv[])
{
	char *arr[get_lines(open_file(argv[1]))]
	[get_char(open_file(argv[1]))];
	
}
