/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:34:51 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/11 10:49:20 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	str_printer(char *str)
{
	int	count;

	if (!str)
		return (str_printer("(null)"));
	count = 0;
	while (str[count] != '\0')
		count += char_printer(str[count]);
	return (count);
}
