/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:29 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/14 14:19:29 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dec_printer(long nbr, p_list *ret)
{
	if (nbr < 0)
	{
		char_printer('-', ret);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		dec_printer(nbr / 10, ret);
		nbr = nbr % 10;
	}
	char_printer(nbr + '0', ret);
}
