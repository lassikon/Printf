/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:34:51 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/14 12:18:53 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	str_printer(char *str, p_list *ret)
{
	int	i;

	if (!str)
		str_printer("(null)", ret);
	i = 0;
	while (str[i] != '\0')
	{
		char_printer(str[i], ret);
		i++;
	}
}
