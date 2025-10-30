/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:29:47 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/30 01:07:41 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c, size_t *counter)
{
	unsigned char	d;

	d = (unsigned char)c;
	(*counter)++;
	write(1, &d, 1);
	return (1);
}
