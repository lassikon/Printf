/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:34:51 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/15 11:08:52 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	str_printer(char *str, p_list *ret)
{
	int	i;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i] != '\0')
	{
		char_printer(str[i], ret);
		i++;
	}
}
