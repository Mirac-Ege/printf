/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkotan <mkotan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:46:57 by mkotan            #+#    #+#             */
/*   Updated: 2026/02/23 21:22:09 by mkotan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(va_list args)
{
	void			*ptr;
	unsigned long	n;
	int				count;

	ptr = va_arg(args, void *);
	if (!ptr)
		return (write(1, "(nil)", 5));
	n = (unsigned long)ptr;
	count = 0;
	count += write(1, "0x", 2);
	count += ft_putnbr_hex(n);
	return (count);
}
