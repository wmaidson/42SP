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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
    int 	src_size;
    char 	*src;
    char 	*dest;

    src = calloc(11, sizeof(char));
    dest = calloc(8, sizeof(char));
    src = "hello";
    src_size = ft_strlcpy(dest, src, 8);
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    printf("src_size: %d\n", src_size);
    return(0);
}