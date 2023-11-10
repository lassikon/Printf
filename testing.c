/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:24:06 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/10 12:08:22 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include "libftprintf.h"

/* int	char_printer(int c)
{
	return (write(1, &c, 1));
}

int	str_printer(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count += char_printer(str[count]);
	return (count);
}
int	nbr_printer(long nbr, int base, int upper_case)
{
	int		count;
	char	*lower;
	char	*upper;

	count = 0;
	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	if (nbr < 0)
	{
		char_printer('-');
		return (nbr_printer(-nbr, base, upper_case) + 1);
	}
	if (nbr >= base)
	{
		count = nbr_printer(nbr / base, base, upper_case);
		return (count + nbr_printer(nbr % base, base, upper_case));
	}
	if (upper_case)
		return (count += char_printer(upper[nbr]));
	return (count += char_printer(lower[nbr]));
} */

/* int	nbr_printer(long nbr, int base, int upper_case)
{
	int		count;
	char	*lower;
	char	*upper;

	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	if (nbr < 0)
	{
		count += char_printer('-');
		nbr = -nbr;
	}
	if (nbr >= base)
	{
		nbr_printer(nbr / base, base, upper_case);
		nbr = nbr % base;
	}
	if (upper_case)
		return (count += char_printer(upper[nbr]));
	return (count += char_printer(lower[nbr]));
} */

/* int	format_printer(char spec, va_list ap)
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

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			count += format_printer(*(format + 1), ap);
			format++;
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
} */

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
	ret = printf("%x\n", 1000);
	printf("The return value is: %d\n\n", ret);
	ft_printf("ft_printf\n");
	ft_ret = ft_printf("%x\n", 1000);
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
}