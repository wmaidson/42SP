/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrodrigu <wrodrigu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 04:21:52 by wrodrigu          #+#    #+#             */
/*   Updated: 2021/04/13 23:15:14 by wrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!is_alpha(str[i++]))
			return (0);
	return (1);
}
