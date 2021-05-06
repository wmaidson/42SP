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

void	ft_is_negative(int n);

int	main(void)
{
	int i;
	
	i = -2;
	while (i <= 2)
	{
		ft_is_negative(i);
		i++;
	}
	printf("\n");
	return (0);
}
