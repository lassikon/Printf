/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:42:39 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/14 12:21:59 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	p_list		ret;

	ret.length = 0;
	ret.error = 0;
	va_start(ap, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			if (*(str + 1) == '\0')
				break ;
			format_eval(*(str + 1), ap, &ret);
			ret.length -= 1;
			str++;
		}
		char_printer(*str, &ret);
		str++;
	}
	va_end(ap);
	if (ret.error == -1)
		return (-1);
	return (ret.length);
}
