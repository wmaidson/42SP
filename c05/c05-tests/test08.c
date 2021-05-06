/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:25:00 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/05/06 12:25:05 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ten_queens_puzzle(void);

int	main(void)
{
    int solutions;

    solutions = ft_ten_queens_puzzle();
    if (solutions == 724)
        printf("> OK, result: %d.\n", solutions);
    else
        printf("> KO, expected: 724, got: %d\n", solutions);
    return (0);
}