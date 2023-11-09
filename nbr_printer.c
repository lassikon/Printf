/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:29 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/09 22:01:03 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	nbr_printer(long nbr, int base, int upper_case)
{
	int		count;
	char	*lower;
	char	*upper;

	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	if (nbr < 0)
	{
		count += char_printer('-');
		nbr = -nbr;
	}
	if (nbr >= base)
	{
		nbr_printer(nbr / base, base, upper_case);
		nbr = nbr % base;
	}
	if (upper_case)
		return (count += char_printer(upper[nbr]));
	return (count += char_printer(lower[nbr]));
}
