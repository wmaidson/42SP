/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:27:39 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/15 13:46:39 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *a;
	char *b;

	if (!*to_find)
		return (str);
	while (*str)
	{
		a = str;
		b = to_find;
		while (*b && *a == *b)
		{
			++a;
			++b;
		}
		if (*b == 0)
			return (str);
		++str;
	}
	return (0);
}
