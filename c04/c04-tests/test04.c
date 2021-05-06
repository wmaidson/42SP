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
#include <unistd.h>
#include <limits.h>

void	ft_putnbr_base(int nb, char *base);

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int		main(void)
{
    // binary base
    printf("Binary bases, n = 47. \"01\" e \"\\/\"\n");
    ft_putnbr_base(47, "01");
    ft_putchar('\n');
    printf("Loading: 101111\n");
    ft_putnbr_base(47, "\\/");
    ft_putchar('\n');
    printf("Loading: /\\////\n");Bases 0 e 1, nao deve aparecer nada, n = 256.
    // base 5
    printf("Bases 5, n = 36. \"01345\" e \"sd2ek\"\n");
    ft_putnbr_base(36, "01345");
    ft_putchar('\n');
    printf("Loading: 131\n");
    ft_putnbr_base(36, "sd2ek");
    ft_putchar('\n');
    printf("Loading: d2d\n");
    // base 10
    printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", INT_MIN);
    ft_putnbr_base(INT_MIN, "0123456789");
    ft_putchar('\n');
    printf("Loading: -2147483648\n");
    ft_putnbr_base(INT_MIN, ",.;\\][{}@#");
    ft_putchar('\n');
    printf("Loading: -;.]}]@\\{]@\n");
    // base 16
    printf("Bases 16, n = -65040. \"0123456789ABCDEF\" e \"jdlskmnMKZxVuzfa\"\n");
    ft_putnbr_base(-65040, "0123456789ABCDEF");
    ft_putchar('\n');
    printf("Loading: -FE10\n");
    ft_putnbr_base(-65040, "jdlskmnMKZxVuzfa");
    ft_putchar('\n');
    printf("Loading: -afdj\n");
    // base 0 and base 1, nothing can appear
    printf("Bases 0 and 1, nothing should appear, n = 256.\n");
    ft_putnbr_base(-29092, "0");
    ft_putnbr_base(-29092, "");
    return (0);
}