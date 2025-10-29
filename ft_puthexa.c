/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:46:42 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/29 22:20:04 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_hexa_recursive(unsigned long n, size_t *counter, int caps)
{
	char	*hex_digits;

	if (caps)
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";
	if (n >= 16)
		ft_print_hexa_recursive(n / 16, counter, caps);
	write(1, &hex_digits[n % 16], 1);
	(*counter)++;
}

int	ft_puthexa(unsigned int num, size_t *counter, int caps)
{
	unsigned long	n;

	if (num == 0)
		return (ft_printf("(nil)"));
	n = (unsigned long) num;
	ft_print_hexa_recursive(n, counter, caps);
	return (*counter);
}
