/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:38:02 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/09 20:20:14 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "libftprintf.h"

int	main(void)
{
	int	ret;

	ret = printf("a\n");
	printf("The return value is: %d\n", ret);
	ret = ft_printf("a\n");
	ft_printf("The return value is: %d\n", ret);

	printf("%lu\n", __LONG_MAX__);
	ret = printf("printf		0x3E8: %x\n", 0x3E8);
	printf("The return value is: %d\n", ret);
	ret = ft_printf("ft_printf	0x3E8: %x\n", 0x3E8);
	ft_printf("The return value is: %d\n", ret);
}
