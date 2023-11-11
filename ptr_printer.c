/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:28:32 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/11 13:42:05 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_printer(unsigned long nbr)
{
	int		count;
	char	*digits;

	count = 0;
	digits = "0123456789abcdef";
	if (nbr >= 16)
	{
		count = ptr_printer(nbr / 16);
		return (count + ptr_printer(nbr % 16));
	}
	return (count += char_printer(digits[nbr]));
}
