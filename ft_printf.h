/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:44:48 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/14 14:09:13 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct p_list
{
	int	length;
	int	error;
}		p_list;

int		ft_printf(const char *format, ...);
void	format_eval(char spec, va_list ap, p_list *ret);
void	char_printer(int c, p_list *ret);
void	str_printer(char *str, p_list *ret);
void	dec_printer(long n, p_list *ret);
void	ptr_printer(unsigned long nbr, p_list *ret);
void	hex_printer(long nbr, int upper_case, p_list *ret);

#endif