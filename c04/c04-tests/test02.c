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

#include <limits.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
    write(1, "-1: ", 4);
    ft_putnbr(-1);
    write(1, "\n1: ", 4);
    ft_putnbr(1);
    write(1, "\n-10: ", 6);
    ft_putnbr(-10);
    write(1, "\n10: ", 5);
    ft_putnbr(10);
    write(1, "\nINT_MAX: ", 10);
    ft_putnbr(INT_MAX);
    write(1, "\nINT_MIN: ", 10);
    ft_putnbr(INT_MIN);
    write(1, "\n", 1);
    return (0);
}