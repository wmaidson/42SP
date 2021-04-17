/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:25:32 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/13 14:30:43 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_uppercase(str[i]))
			str[i] = str[i] + 32;
		++i;
	}
	return (str);
}
