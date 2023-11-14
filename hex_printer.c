/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:33:27 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/14 13:48:50 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex_printer(long nbr, int upper_case, p_list *ret)
{
	char	*lower;
	char	*upper;

	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	if (nbr < 0)
	{
		char_printer('-', ret);
		nbr = -nbr;
	}
	if (nbr >= 16)
	{
		hex_printer(nbr / 16, upper_case, ret);
		nbr = nbr % 16;
	}
	if (upper_case)
		char_printer(upper[nbr], ret);
	else
		char_printer(lower[nbr], ret);
}
