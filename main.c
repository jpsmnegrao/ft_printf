/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:19:46 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/30 01:00:56 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc -Ift_printf main.c libftprintf.a && ./a.out
// gcc -Ilibft -Ift_printf main.c libftprintf.a ./libft/libft.a -o test && ./test


#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int				n;
	char			c;
	char			d;
	char			e;
	unsigned int	num;
	char			*str;
	int				*ptr;
	void			*null_ptr;

	n = 42;
	c = 'a';
	d = '\n';
	e = '\t';
	num = 305441741;
	str = "Mambo Jambo";
	ptr = &n;
	null_ptr = NULL;
/*	printf("\n -----> Standard printf <-----\nTesting ft_printf\n");
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
	
	printf("\n -----> Standard printf with a number in hexadecimal (base 16) lowercase <-----\nTesting - %x \n", num);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with a number in hexadecimal (base 16) lowercase <----- \nTesting - %x \n", num);
	fflush(stdout);

	printf("\n -----> Standard printf with a number in hexadecimal (base 16) uppercase <-----\nTesting - %X \n", num);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with a number in hexadecimal (base 16) uppercase <----- \nTesting - %X \n", num);
	fflush(stdout);
	
	printf("\n-----> Standard printf with a pointer <-----\n");
	printf("Pointer address: %p\n", ptr);
	fflush(stdout);
	ft_printf("\n-----> 42 ft_printf with a pointer <-----\n");
	ft_printf("Pointer address: %p\n", ptr);
	fflush(stdout);

	printf("\n-----> Standard printf with a NULL pointer <-----\n");
	printf("Pointer address: %p\n", null_ptr);
	fflush(stdout);
	ft_printf("\n-----> 42 ft_printf with a NULL pointer <-----\n");
	ft_printf("Pointer address: %p\n", null_ptr);
	fflush(stdout);

	printf("\n -----> Standard printf with a char in hexadecimal (base 16) lowercase <-----\n");
	printf("Testing - %x\n", n);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with a char in hexadecimal (base 16) lowercase <-----\n");
	ft_printf("Testing - %x\n", n);
	fflush(stdout);

	printf("\n -----> Standard printf with a number in hexadecimal (base 16) uppercase <-----\n");
	printf("Testing - %c and %s and 0x%X\n", c, str, num);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with a number in hexadecimal (base 16) uppercase <-----\n");
	ft_printf("Testing - %c and %s and 0x%X\n", c, str, num);
	fflush(stdout);



	printf("\n -----> Standard printf TEST 1 with char '0' <-----\nTesting - %c\n", '0');
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf TEST 1 with char '0' <----- \nTesting - %c\n", '0');
	fflush(stdout);
	printf("\n -----> Standard printf TEST 2 with chars '0', 0, '1' <-----\nTesting - %c %c %c\n", '0', 0, '1');
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf TEST 2 with chars '0', 0, '1' <----- \nTesting - %c %c %c\n", '0', 0, '1');
	fflush(stdout);
	printf("\n -----> Standard printf TEST 3 with char '0' - 256 <-----\nTesting - %c\n", '0' - 256);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf TEST 3 with char '0' - 256 <----- \nTesting - %c\n", '0' - 256);
	fflush(stdout);

	printf("\n -----> Standard printf TEST 1 with string \"-\" <-----\nTesting - %s\n", "-");
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf TEST 1 with string \"-\" <----- \nTesting - %s\n", "-");
	fflush(stdout);
	printf("\n -----> Standard printf TEST 2 with strings \"\", \"-\" <-----\nTesting - %s %s\n", "", "-");
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf TEST 2 with strings \"\", \"-\" <----- \nTesting - %s %s\n", "", "-");
	fflush(stdout);
	printf("\n -----> Standard printf TEST 3 with NULL string <-----\nTesting - NULL %s NULL\n", NULL);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf TEST 3 with NULL string <----- \nTesting - NULL %s NULL\n", NULL);
	fflush(stdout);*/

	printf("\n-----> Standard printf TEST 1 <-----\nTesting - %c\n", '0');
	fflush(stdout);
	ft_printf("\n-----> ft_printf TEST 1 <-----\nTesting - %c\n", '0');
	fflush(stdout);

	printf("\n-----> Standard printf TEST 2 <-----\nTesting -  %c \n", '0');
	fflush(stdout);
	ft_printf("\n-----> ft_printf TEST 2 <-----\nTesting -  %c \n", '0');
	fflush(stdout);

	printf("\n-----> Standard printf TEST 3 <-----\nTesting -  %c\n", '0' - 256);
	fflush(stdout);
	ft_printf("\n-----> ft_printf TEST 3 <-----\nTesting -  %c\n", '0' - 256);
	fflush(stdout);

	printf("\n-----> Standard printf TEST 4 <-----\nTesting - %c \n", '0' + 256);
	fflush(stdout);
	ft_printf("\n-----> ft_printf TEST 4 <-----\nTesting - %c \n", '0' + 256);
	fflush(stdout);

	printf("\n-----> Standard printf TEST 5 <-----\nTesting -  %c %c %c \n", '0', 0, '1');
	fflush(stdout);
	ft_printf("\n-----> ft_printf TEST 5 <-----\nTesting -  %c %c %c \n", '0', 0, '1');
	fflush(stdout);

	printf("\n-----> Standard printf TEST 6 <-----\nTesting -  %c %c %c \n", ' ', ' ', ' ');
	fflush(stdout);
	ft_printf("\n-----> ft_printf TEST 6 <-----\nTesting -  %c %c %c \n", ' ', ' ', ' ');
	fflush(stdout);

	printf("\n-----> Standard printf TEST 7 <-----\nTesting -  %c %c %c \n", '1', '2', '3');
	fflush(stdout);
	ft_printf("\n-----> ft_printf TEST 7 <-----\nTesting -  %c %c %c \n", '1', '2', '3');
	fflush(stdout);

	printf("\n-----> Standard printf TEST 8 <-----\nTesting -  %c %c %c \n", '2', '1', 0);
	fflush(stdout);
	ft_printf("\n-----> ft_printf TEST 8 <-----\nTesting -  %c %c %c \n", '2', '1', 0);
	fflush(stdout);

	printf("\n-----> Standard printf TEST 9 <-----\nTesting -  %c %c %c \n", 0, '1', '2');
	fflush(stdout);
	ft_printf("\n-----> ft_printf TEST 9 <-----\nTesting -  %c %c %c \n", 0, '1', '2');
	fflush(stdout);


	return (0);
}
