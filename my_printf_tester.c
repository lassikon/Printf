/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:38:02 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/11 13:42:18 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int	ret;
	int	ft_ret;

	ft_printf("printf\n");
	ret = printf("a\n");
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("a\n");
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n");

	ft_printf("printf\n");
	ret = printf("%d\n", 525);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%d\n", 525);
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n");

	ft_printf("printf\n");
	ret = printf("%x\n", 100000);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%x\n", 100000);
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n");
	
	ft_printf("printf\n");
	ret = printf("%X\n", INT_MAX);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%X\n", INT_MAX);
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n");

	ft_printf("printf\n");
	ret = printf("%i\n", -2349823);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%i\n", -2349823);
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n");

	ft_printf("printf\n");
	ret = printf("%i\n%c\n%i\n", -2349823, 'a', 666);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%i\n%c\n%i\n", -2349823, 'a', 666);
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n");

	ft_printf("printf\n");
	ret = printf("%i\n", INT_MAX);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%i\n", INT_MAX);
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n");

	ft_printf("printf\n");
	ret = printf("%i\n", INT_MIN);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%i\n", INT_MIN);
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n");

	ft_printf("printf\n");
	ret = printf("%s\n", NULL);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%s\n", NULL);
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n");

	ft_printf("printf\n");
	ret = printf("%c\n", 0);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%c\n", 0);
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n");
	
	ft_printf("printf\n");
	ret = printf("%s\n", "1234%");
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%s\n", "1234%");
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n");
	
	int	ptr = 10;
	void	*voidptr = &ptr;
	ft_printf("printf\n");
	ret = printf("%p\n", voidptr);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%p\n", voidptr);
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n");
	
	/* ft_printf("printf\n");
	ret = printf("%p", 1);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%p", 1);
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n");
	
	ft_printf("printf\n");
	ret = printf("%p", 66666);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%p", 66666);
	ft_printf("The return value is: %d\n\n", ft_ret);
	if (ret != ft_ret)
		ft_printf("ERROR: DIFFERENT RETURN VALUE!\n\n"); */
}
