/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_printer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:04:37 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/15 11:07:08 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	char_printer(int c, p_list *ret)
{
	if (ret->error == -1)
		return ;
	if (write(1, &c, 1) < 0)
		ret->error = -1;
	else
		ret->length += 1;
}
