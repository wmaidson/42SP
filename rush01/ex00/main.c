/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:13:58 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/12 13:55:41 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "aux_functions.h"

int		main(int argc, char **argv)
{
	int *constraints;
	int board[4][4];

	if (argc == 1 || validate_string(argv[1]) == 0) // se argc for igual a 1
	{
		write(1, "Error\n", 6);
		return (0);
	}
	constraints = malloc(sizeof(int) * 17); // guardar as posicoes do array
	constraints = string_to_int_array(argv[1]);
	if (valid_input(constraints) == 0 || check_ctr(constraints) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	fill_start(board, constraints); // preencher o board
	if (fill_board(board, 0, 0, constraints) == 0) // linha 0 coluna 0
	{
		write(1, "Error\n", 6);
	}
	return (0);
}

int		validate_string(char *str)
{
	int i;
	int nb_of_chars;
	int nb_of_spaces;

	i = 0;
	nb_of_chars = 0;
	nb_of_spaces = 0;
	while (*(str + i) != '\0') // diferente de vazio
	{
		nb_of_chars++;
		if (*(str + i) == ' ')
			nb_of_spaces++;
		i++;
	}
	if (nb_of_spaces > 15 || (nb_of_chars - nb_of_spaces) != 16)
		return (0);
	return (1);
}

int		*string_to_int_array(char *str)
{
	int i;
	int *arr;
	int arr_idx;

	i = 0;
	arr_idx = 0;
	arr = malloc(sizeof(int) * 17);
	while (*(str + i) != '\0' && arr_idx <= 16)
	{
		if (*(str + i) >= 49 && *(str + i) <= 52) // para trasformar em inteiro
		{
			*(arr + arr_idx) = *(str + i) - 48;
			arr_idx++;
		}
		i++;
	}
	return (arr);
}

int		valid_input(int *constraints) // validar se o usuario colocou mais de 16 aractere
{
	int i;
	int size_constraints;

	i = 0;
	size_constraints = 0;
	while (*(constraints + i) != '\0')
	{
		i++;
		size_constraints++;
	}
	if (size_constraints != 16)
		return (0);
	return (1);
}
