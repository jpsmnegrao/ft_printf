/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:20:09 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/29 18:08:25 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	len;

	len = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format_converter(*(format + 1), args, &len);
			format++;
		}
		else
			len += write(1, format, 1);
		format++;
	}
	va_end (args);
	return (len);
}
