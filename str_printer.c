/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:34:51 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/09 20:09:10 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	str_printer(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count += char_printer(str[count]);
	return (count);
}