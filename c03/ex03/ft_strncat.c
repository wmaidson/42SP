/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 06:24:43 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/14 14:27:23 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = dest;
	while (*ptr)
		++ptr;
	while (*src && i < nb)
	{
		*ptr = *src;
		++src;
		++ptr;
		++i;
	}
	*ptr = 0;
	return (dest);
}
