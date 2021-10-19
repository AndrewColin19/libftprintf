/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:37:20 by acolin            #+#    #+#             */
/*   Updated: 2021/10/19 17:47:56 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(char *format, va_list param)
{
	int	size;

	if (*format == 'c')
		size = ft_display_c((char) va_arg(param, int));
	else if (*format == 's')
		size = ft_display_s((char *) va_arg(param, char *));
	else if (*format == 'p')
		size = ft_display_p((unsigned long) va_arg(param, unsigned long));
	else if (*format == 'd' || *format == 'i')
		size = ft_display_double((int) va_arg(param, int));
	else if (*format == 'u')
		size = ft_display_u((unsigned int) va_arg(param, unsigned int));
	else if (*format == 'x' || *format == 'X')
		size = ft_display_hex((int) va_arg(param, int), *format);
	else if (*format == '%')
		size = ft_display_c('%');
	else
		size = 0;
	return (size);
}

int	ft_printf(const char *format, ...)
{
	va_list	param;
	char	current;
	size_t	size;

	va_start(param, format);
	size = 0;
	current = *format;
	while (current != '\0')
	{
		if (current != '%')
			size += ft_display_c(current);
		else
			size += ft_check((char *)++format, param);
		format++;
		current = *format;
	}
	va_end(param);
	return (size);
}
