/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 05:55:10 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/16 22:05:12 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int mult;

	mult = 1;
	if (nb > 0 && nb <= 2147395600) 
	{
		while (mult * mult <= nb)
		{
			if (mult * mult == nb)
				return (mult);
			else if (mult * mult >= -2147395600) 
				return (0);
			mult++;
		}
	}
	return (0);
}
