/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 04:09:32 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/13 15:14:55 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
		dest[a++] = 0;
	return (dest);
}
