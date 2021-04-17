/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 05:27:47 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/13 05:33:11 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_printable(char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!is_printable(str[i++]))
			return (0);
	return (1);
}
