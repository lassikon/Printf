/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:29 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/14 12:17:15 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	nbr_printer(long nbr, int base, int upper_case, p_list *ret)
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
	if (nbr >= base)
	{
		nbr_printer(nbr / base, base, upper_case, ret);
		nbr = nbr % base;
	}
	if (upper_case)
	{
		char_printer(upper[nbr], ret);
	}
	char_printer(lower[nbr], ret);
}
