/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 05:48:03 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/16 17:26:23 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		fib(int n, int a, int b)
{
	if (n == 0)
		return (a);
	if (n == 1)
		return (b);
	return (fib(n - 1, b, a + b));
}

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fib(index, 0, 1));
}
