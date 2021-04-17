/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 05:16:02 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/13 05:27:07 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!is_uppercase(str[i++]))
			return (0);
	return (1);
}
