/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 04:32:15 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/13 21:37:29 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int a;

	a = 0;
	while (str[a])
		if (!is_numeric(str[a++]))
			return (0);
	return (1);
}
