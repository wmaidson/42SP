/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 05:28:38 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/16 05:33:11 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int ret;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	ret = 1;
	while (nb)
		ret *= (nb--);
	return (ret);
}
