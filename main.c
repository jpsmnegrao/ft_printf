/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:19:46 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/29 18:57:11 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc -Ilibft -Ift_printf main.c libftprintf.a && ./a.out
// gcc -Ilibft -Ift_printf main.c libftprintf.a ./libft/libft.a -o test && ./test


#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		n;
	char	c;
	char	d;
	char	e;
	char	*str;

	n = 42;
	c = 'a';
	d = '\n';
	e = '\t';
	str = "Mambo Jambo";
	printf("\n -----> Standard printf <-----\nTesting ft_printf\n");
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf <----- \nTesting ft_printf\n");
	fflush(stdout);
	printf("\n -----> Standard printf with a char (a) <-----\nTesting - %c\n", c);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with a char (a) <----- \nTesting - %c\n", c);
	fflush(stdout);
	printf("\n -----> Standard printf with chars (a, line break, a) <-----\nTesting - %c %c %c\n", c, d, c);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with chars (a, line break, a) <----- \nTesting - %c %c %c\n", c, d, c);
	fflush(stdout);
	printf("\n -----> Standard printf with chars (a, tab, a) <-----\nTesting - %c %c %c\n", c, e, c);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with chars (a, tab, a) <----- \nTesting - %c %c %c\n", c, e, c);
	fflush(stdout);
	printf("\n -----> Standard printf with a string <-----\nTesting - %s\n", str);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with a string <----- \nTesting - %s\n", str);
	fflush(stdout);
	printf("\n -----> Standard printf with a char and a string <-----\nTesting - %c and %s\n", c, str);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with a char and a string <----- \nTesting - %c and %s\n", c, str);
	fflush(stdout);
	return (0);
}
