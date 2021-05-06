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
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 42;
	b = 10;
	div = calloc(1, sizeof(int));
	mod = calloc(1, sizeof(int));
	ft_div_mod(a, b, div, mod);
	printf("a: %d, b: %d, div: %p, *div: %d, mod: %p, *mod: %d\n",
			a, b, div, *div, mod, *mod);
	return (0);
}