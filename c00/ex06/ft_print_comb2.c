/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 01:59:47 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/15 14:49:47 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = -1;
	while (x++ < 98)
	{
		y = x;
		while (y++ < 99)
		{
			ft_putchar('0' + (x / 10));
			ft_putchar('0' + (x % 10));
			ft_putchar(' ');
			ft_putchar('0' + (y / 10));
			ft_putchar('0' + (y % 10));
			if (x != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
