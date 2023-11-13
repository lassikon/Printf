/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:42:39 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/13 16:03:44 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
static size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*str_src;
	size_t	i;

	str_src = (char *)src;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < (dstsize - 1) && str_src[i] != '\0')
	{
		dst[i] = str_src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
static char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		result;
	char	*str;

	str = ft_strdup(format);
	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			result = format_eval(*(str + 1), ap);
			if (result < 0)
			{
				va_end(ap);
				free(str);
				return (-1);
			}
			count += result;
			str++;
		}
		else
		{
			if (*str == '%' && *(str + 1) == '\0')
				break ;
			if (char_printer(*str) < 0)
			{
				va_end(ap);
				free(str);
				return (-1);
			}
			count++;
		}
		str++;
	}
	va_end(ap);
	free(str);
	return (count);
}
/* int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;
	int		temp;
	int		i;

	count = 0;
	i = 0;
	va_start(ap, str);
	while (str[i] != '\0')
	{
		temp = count;
		if (str[i] == '%')
		{
			if (str[i + 1] == '\0')
				break ;
			if ((count += format_eval((str[i + 1]), ap)) < temp)
				return (-1);
			i++;
		}
		else if ((count += write(1, &str[i], 1)) < temp)
			return (-1);
		i++;
	}
	va_end(ap);
	return (count);
} */
