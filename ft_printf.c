/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:42:39 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/10 11:52:40 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (format[count] != '\0')
	{
		if (format[count] == '%')
			count = count + format_eval(format[count + 1], ap);
		else
			count = count + write(1, format, 1);
		count++;
	}
	va_end(ap);
	return (count);
}
