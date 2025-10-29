/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_converter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:27:33 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/29 22:21:20 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_converter(char data_type, va_list args, size_t *counter)
{
	int	len;

	len = 0;
	if (data_type == 'c')
		ft_putchar(va_arg(args, int), counter);
	else if (data_type == 's')
		ft_putstr(va_arg(args, char *), counter);
	else if (data_type == 'p')
		ft_putptraddress(va_arg(args, void *), counter);
	else if (data_type == 'x')
		ft_puthexa(va_arg(args, int), counter, 0);
	else if (data_type == 'X')
		ft_puthexa(va_arg(args, int), counter, 1);
	else
		len += write(1, &data_type, 1);
}

/*	else if (data_type == 'd')
		ft_putnum(va_arg(args, void *), counter);
	else if (data_type == 'i')
		ft_putstr(va_arg(args, void *), counter);
	else if (data_type == 'u')
		ft_putstr(va_arg(args, void *), counter);
*/