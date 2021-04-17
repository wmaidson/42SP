/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:31:04 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/12 22:53:21 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int y;
	int tmp;

	x = 0;
	while (x++ < size)
	{
		y = 0;
		while (++y < size)
		{
			if (tab[y - 1] > tab[y])
			{
				tmp = tab[y - 1];
				tab[y - 1] = tab[y];
				tab[y] = tmp;
			}
		}
	}
}
