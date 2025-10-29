/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:19:46 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/28 19:38:34 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc -Ilibft -Ift_printf main.c libftprintf.a && ./a.out
// gcc -Ilibft -Ift_printf main.c libftprintf.a ./libft/libft.a -o test && ./test


#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	n;

	n = 42;
	printf("\n -----> Standard printf <-----\nTesting ft_printf\n");
	ft_printf("\n -----> 42 ft_printf <----- \nTesting ft_printf\n");
	printf("\n -----> Standard printf with an int <-----\nTesting %d\n", n);
	ft_printf("\n -----> 42 ft_printf <----- \nTesting %d\n", n);
	return (0);
}
