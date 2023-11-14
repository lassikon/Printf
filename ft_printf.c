/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:42:39 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/14 15:04:09 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	p_list		ret;
	int			i;

	ret.length = 0;
	ret.error = 0;
	i = 0;
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '\0')
				break ;
			format_eval(str[i + 1], ap, &ret);
			i++;
		}
		else
			char_printer(str[i], &ret);
		i++;
	}
	va_end(ap);
	if (ret.error == -1)
		return (-1);
	return (ret.length);
}
