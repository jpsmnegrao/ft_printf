/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:19:46 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/28 18:17:34 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc -Ilibft -Ift_printf main.c libftprintf.a && ./a.out

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("\n -----> Standard printf <-----\nTesting ft_printf\n");
	ft_printf("\n -----> 42 ft_printf <----- \nTesting ft_printf\n");
	return (0);
}
