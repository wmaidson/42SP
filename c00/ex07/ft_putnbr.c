/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 03:34:59 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/16 09:54:24 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_num(int nb)
{
	unsigned int num_checked;

	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		num_checked = nb * (-1);
	}
	else
	{
		num_checked = nb;
	}
	return (num_checked);
}

void	ft_putnbr(int nb)
{
	char			n[10];
	unsigned int	num;
	int				count;

	num = ft_check_num(nb);
	count = 9;
	while (count >= 0)
	{
		n[count] = (num % 10) + '0';
		num = num / 10;
		count--;
	}
	while (++count < 10 && nb != 0)
		nb = nb / 10;
	write(1, &n[10 - count], count);
}
