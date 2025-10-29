/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_converter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:27:33 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/29 18:01:19 by jpaim-so         ###   ########.fr       */
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
	else
		len += write(1, &data_type, 1);
}
