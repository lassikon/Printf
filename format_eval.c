/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_eval.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:12:47 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/14 14:18:07 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_eval(char spec, va_list ap, p_list *ret)
{

	if (spec == 'c')
		char_printer(va_arg(ap, int), ret);
	else if (spec == 's')
		str_printer(va_arg(ap, char *), ret);
	else if (spec == 'd' || spec == 'i')
		dec_printer((long)(va_arg(ap, int)), ret);
	else if (spec == 'u')
		dec_printer((long)(va_arg(ap, unsigned int)), ret);
	else if (spec == 'x')
		hex_printer((long)(va_arg(ap, unsigned int)), 0, ret);
	else if (spec == 'X')
		hex_printer((long)(va_arg(ap, unsigned int)), 1, ret);
	else if (spec == 'p')
	{
		str_printer("0x", ret);
		ptr_printer((unsigned long)va_arg(ap, void *), ret);
	}
	else
		char_printer(spec, ret);
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