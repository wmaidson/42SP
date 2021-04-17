/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:27:10 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/15 15:05:56 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*ptr)
		++ptr;
	while (*src)
	{
		*ptr = *src;
		++src;
		++ptr;
	}
	*ptr = 0;
	return (dest);
}
