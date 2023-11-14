/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:28:32 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/14 12:09:09 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ptr_printer(unsigned long nbr, p_list *ret)
{
	char	*digits;

	digits = "0123456789abcdef";
	if (nbr >= 16)
	{
		ptr_printer(nbr / 16, ret);
		nbr = nbr % 16;
	}
	char_printer(digits[nbr], ret);
}
