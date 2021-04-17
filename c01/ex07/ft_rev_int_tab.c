/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:12:12 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/10 03:45:02 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int b;

	a = 0;
	while (a < --size)
	{
		b = tab[a];
		tab[a++] = tab[size];
		tab[size] = b;
	}
}
