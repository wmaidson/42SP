/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 06:45:34 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/16 06:48:45 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
		++i;
	}
	return (0);
}
