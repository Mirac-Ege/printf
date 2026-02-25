/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkotan <mkotan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:45:57 by mkotan            #+#    #+#             */
/*   Updated: 2026/02/23 20:40:09 by mkotan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_print_char(va_list args);

int	ft_print_string(va_list args);

int	ft_print_number(va_list args);

int	ft_print_unsigned(va_list args);

int	ft_print_hex(va_list args, int u);

int	ft_print_pointer(va_list args);

int	ft_putnbr_count(long n);

int	ft_putnbr_unsigned(unsigned long n);

int	ft_putnbr_hex(unsigned long n);

int	ft_putnbr_uphex(unsigned long n);

#endif
