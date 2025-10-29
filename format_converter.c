/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_converter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:27:33 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/28 18:42:40 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_converter(char data_type, va_list args)
{
	int	len;

	len = 0;
	if (data_type == 'c')
		len += ft_putchar(va_arg(args, int));
	else
		len += write(1, &data_type, 1);
	return (len);
}
