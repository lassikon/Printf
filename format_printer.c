/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:12:47 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/09 22:03:30 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	format_printer(char spec, va_list ap)
{
	int	count;

	count = 0;
	if (spec == '%')
		count += write(1, "%", 1);
	else if (spec == 'c')
		count += char_printer(va_arg(ap, int));
	else if (spec == 's')
		count += str_printer(va_arg(ap, char *));
	else if (spec == 'd' || spec == 'i')
		count += nbr_printer((long)(va_arg(ap, int)), 10, 0);
	else if (spec == 'u')
		count += nbr_printer((long)(va_arg(ap, unsigned int)), 10, 0);
	else if (spec == 'p')
		count += nbr_printer((long)(va_arg(ap, unsigned long)), 16, 0);
	else if (spec == 'x')
		count += nbr_printer((long)(va_arg(ap, unsigned int)), 16, 0);
	else if (spec == 'X')
		count += nbr_printer((long)(va_arg(ap, unsigned int)), 16, 1);
	else
		count += write(1, &spec, 1);
	return (count);
}

/* c = va_arg(args, int)
s = va_arg(args, char *)
d = va_arg(args, int)
i = va_arg(args, int)
u = va_arg(args, unsigned int)
p = va_arg(args, unsigned long)# or 
                               #(unsigned long)va_arg(args, void *);
x = va_arg(args, unsigned int)
X = va_arg(args, unsigned int) */