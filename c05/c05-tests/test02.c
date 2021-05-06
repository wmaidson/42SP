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

int	ft_iterative_power(int nb, int power);

void ft_iterative_power_test(int nb, int power)
{
    int res;

    res = ft_iterative_power(nb, power);
    printf(" nb = %d, power = %d, result: %d\n", nb, power, res);
}

int	main(void)
{
    int nb;
    int power;

    // testing negative powers (must return 0)
    printf("[1] Negative powers (must return 0)\n");
    nb = -4;
    while (nb <= 4)
    {
        power = -4;
        while (power < 0)
        {
            ft_iterative_power_test(nb, power);
            power++;
        }
        nb++;
    }
    // testing powers 0 (must return 1)
    printf("[2] Potentials 0 (must return 1)\n");
    nb = -4;
    power = 0;
    while (nb <= 4)
    {
        ft_iterative_power_test(nb, power);
        nb++;
    }
    // testing powers 0 (must return 1)
    printf("[3] Positive potentials (return the number raised to power\n");
    nb = -4;
    while (nb <= 4)
    {
        power = 1;
        while (power <= 4)
        {
            ft_iterative_power_test(nb, power);
            power++;
        }
        nb++;
    }
    return (0);
}