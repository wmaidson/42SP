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

char	*ft_strcapitalize(char *str);

int	main(void)
{
    char str1[] = "here is a lowercase!";
    char str2[] = "HERE IS A UPPERCASE!";
    char str3[] = "hello+someone|here?";
    char str4[] = "HELLO+SOMEONE*hERE";
    char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
    char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";

    printf("str1: %s\n", str1);
    ft_strcapitalize(str1);
    printf("str1_c: %s\n", str1);
    printf("str2: %s\n", str2);
    ft_strcapitalize(str2);
    printf("str2_c: %s\n", str2);
    printf("str3: %s\n", str3);
    ft_strcapitalize(str3);
    printf("str3_c: %s\n", str3);
    printf("str4: %s\n", str4);
    ft_strcapitalize(str4);
    printf("str4_c: %s\n", str4);
    printf("str5: %s\n", str5);
    ft_strcapitalize(str5);
    printf("str5_c: %s\n", str5);
    printf("str6: %s\n", str6);
    ft_strcapitalize(str6);
    printf("str6_c: %s\n", str6);
    return (0);
}
