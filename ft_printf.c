/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkotan <mkotan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:46:50 by mkotan            #+#    #+#             */
/*   Updated: 2026/04/01 20:12:40 by mkotan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_dispatch(va_list args, char c)
{
	if (c == 'c')
		return (ft_print_char(args));
	if (c == 's')
		return (ft_print_string(args));
	if (c == 'd' || c == 'i')
		return (ft_print_number(args));
	if (c == 'u')
		return (ft_print_unsigned(args));
	if (c == 'x')
		return (ft_print_hex(args, 0));
	if (c == 'X')
		return (ft_print_hex(args, 1));
	if (c == 'p')
		return (ft_print_pointer(args));
	if (c == '%')
		return (write(1, "%", 1));
	return (write(1, "%", 1) + write(1, &c, 1));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			count += ft_dispatch(args, format[++i]);
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
