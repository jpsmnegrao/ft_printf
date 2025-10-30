/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:19:16 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/30 18:26:47 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, size_t *counter)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*counter) += 11;
		return (*counter);
	}
	else if (n < 0)
	{
		write (1, "-", 1);
		(*counter)++;
		n = -n;
	}
	if (n / 10)
		ft_putnbr(n / 10, counter);
	c = n % 10 + '0';
	write(1, &c, 1);
	(*counter)++;
	return (*counter);
}
