/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:29 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/11 11:07:51 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nbr_printer(long nbr, int base, int upper_case)
{
	int		count;
	char	*lower;
	char	*upper;

	count = 0;
	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	if (nbr < 0)
	{
		char_printer('-');
		return (nbr_printer(-nbr, base, upper_case) + 1);
	}
	if (nbr >= base)
	{
		count = nbr_printer(nbr / base, base, upper_case);
		return (count + nbr_printer(nbr % base, base, upper_case));
	}
	if (upper_case)
		return (count += char_printer(upper[nbr]));
	return (count += char_printer(lower[nbr]));
}
