/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptraddress.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:54:02 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/29 21:59:38 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_ptr_recursive(unsigned long n, size_t *counter)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		ft_print_ptr_recursive(n / 16, counter);
	write(1, &hex_digits[n % 16], 1);
	(*counter)++;
}

int	ft_putptraddress(void *ptr, size_t *counter)
{
	unsigned long	n;

	if (ptr == NULL)
		return (ft_printf("(nil)"));
	n = (unsigned long) ptr;
	write(1, "0x", 2);
	*counter += 2;
	ft_print_ptr_recursive(n, counter);
	return (*counter);
}
