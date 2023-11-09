/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:38:02 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/09 10:43:49 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	main(void)
{
	int	ret;

	ret = printf("a\n");
	printf("The return value is: %d", ret);
	ret = ft_printf("a\n");
	ft_printf("The return value is: %d", ret);
}