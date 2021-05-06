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

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
    char *src;
    char *dest;
    char *ret;

    src = calloc(11, sizeof(char));
    src = "0123456789";
    dest = calloc(11, sizeof(char));
    ret = ft_strcpy(dest, src);
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    printf("ret: %s\n", ret);
    return (0);
}
