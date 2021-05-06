/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 21:29:00 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/05 21:38:05 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_combn(int n);

int	main(void)
{
	int n;

	n = 2;
	while(n <= 5)
	{
		printf("n = %d:\n", n);
		ft_print_combn(n++);
		write(1, "\n", 1);
	}
	n = 9;
	printf("n = %d:\n", n);
	ft_print_combn(n++);
	write(1, "\n", 1);
	return (0);
}