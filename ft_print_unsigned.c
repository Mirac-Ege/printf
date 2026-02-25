/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkotan <mkotan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:46:52 by mkotan            #+#    #+#             */
/*   Updated: 2026/02/20 14:01:51 by mkotan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(va_list args)
{
	unsigned long	n;
	int				count;

	n = va_arg(args, unsigned int);
	count = 0;
	count += ft_putnbr_unsigned(n);
	return (count);
}
