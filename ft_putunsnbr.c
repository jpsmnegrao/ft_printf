/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:31:23 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/30 18:40:36 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsnbr(unsigned int n, size_t *counter)
{
	char	c;

	if (n / 10)
		ft_putunsnbr(n / 10, counter);
	c = n % 10 + '0';
	write(1, &c, 1);
	(*counter)++;
	return (*counter);
}
