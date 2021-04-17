/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 06:25:14 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/16 06:36:19 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	--argc;
	while (*argv[argc])
		write(1, argv[argc]++, 1);
	write(1, "\n", 1);
	return (0);
}
