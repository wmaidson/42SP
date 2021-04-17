/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 23:52:52 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/16 03:26:05 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec(int nb)
{
	char c;

	if (!nb)
		return ;
	rec(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		rec(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}
