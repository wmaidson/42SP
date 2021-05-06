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

#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
    char *str;

    str = "";
    ft_putstr(str);
    write(1, "\n", 1);
    str = "This is a test string.";
    ft_putstr(str);
    write(1, "\n", 1);
    str = "This is a gianormous test string, testing to see whatever happens in here....";
    ft_putstr(str);
    write(1, "\n", 1);
    return (0);
}