/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:19:46 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/30 19:25:26 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// cc -Ift_printf main.c libftprintf.a && ./a.out

#include <stdio.h>
#include "limits.h"
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

	printf("\n -----> Standard printf with an int in hexadecimal (base 16) lowercase <-----\n");
	printf("Testing - %x\n", n);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with an int in hexadecimal (base 16) lowercase <-----\n");
	ft_printf("Testing - %x\n", n);
	fflush(stdout);

	printf("\n -----> Standard printf with a character, a string and a number in hexadecimal (base 16) uppercase <-----\n");
	printf("Testing - %c and %s and 0x%X\n", c, str, num);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with a character, a string and a number in hexadecimal (base 16) uppercase <-----\n");
	ft_printf("Testing - %c and %s and 0x%X\n", c, str, num);
	fflush(stdout);

	printf("\n -----> Standard printf with char '0' <-----\nTesting - %c\n", '0');
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with char '0' <----- \nTesting - %c\n", '0');
	fflush(stdout);
	printf("\n -----> Standard printf with chars '0', 0, '1' <-----\nTesting - %c %c %c\n", '0', 0, '1');
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with chars '0', 0, '1' <----- \nTesting - %c %c %c\n", '0', 0, '1');
	fflush(stdout);
	printf("\n -----> Standard printf with char '0' - 256 <-----\nTesting - %c\n", '0' - 256);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with char '0' - 256 <----- \nTesting - %c\n", '0' - 256);
	fflush(stdout);

	printf("\n -----> Standard printf with string \"-\" <-----\nTesting - %s\n", "-");
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with string \"-\" <----- \nTesting - %s\n", "-");
	fflush(stdout);
	printf("\n -----> Standard printf with strings \"\", \"-\" <-----\nTesting - %s %s\n", "", "-");
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with strings \"\", \"-\" <----- \nTesting - %s %s\n", "", "-");
	fflush(stdout);
	printf("\n -----> Standard printf with NULL string <-----\nTesting - NULL %s NULL\n", NULL);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with NULL string <----- \nTesting - NULL %s NULL\n", NULL);
	fflush(stdout);

	printf("\n-----> Standard printf char '0' + 256 <-----\nTesting - %c \n", '0' + 256);
	fflush(stdout);
	ft_printf("\n-----> ft_printf char '0' + 256 <-----\nTesting - %c \n", '0' + 256);
	fflush(stdout);

	printf("\n-----> Standard printf three spaces <-----\nTesting -  %c %c %c \n", ' ', ' ', ' ');
	fflush(stdout);
	ft_printf("\n-----> ft_printf three spaces <-----\nTesting -  %c %c %c \n", ' ', ' ', ' ');
	fflush(stdout);

	printf("\n-----> Standard printf three numbers <-----\nTesting -  %c %c %c \n", '1', '2', '3');
	fflush(stdout);
	ft_printf("\n-----> ft_printf three numbers <-----\nTesting -  %c %c %c \n", '1', '2', '3');
	fflush(stdout);

	printf("\n-----> Standard printf int <-----\nTesting - %d\n", n);
	fflush(stdout);
	ft_printf("\n-----> ft_printf int <-----\nTesting - %d\n", n);
	fflush(stdout);

	printf("\n-----> Standard printf int - char <-----\nTesting - %d\n", c);
	fflush(stdout);
	ft_printf("\n-----> ft_printf int - char <-----\nTesting - %d\n", c);
	fflush(stdout);

	printf("\n-----> Standard printf int <-----\nTesting - %d\n", -1231231);
	fflush(stdout);
	ft_printf("\n-----> ft_printf int <-----\nTesting - %d\n", -1231231);
	fflush(stdout);

	printf("\n-----> Standard printf int <-----\nTesting - %d\n", 2147483648);
	fflush(stdout);
	ft_printf("\n-----> ft_printf int <-----\nTesting - %d\n", 2147483648);
	fflush(stdout);

	printf("\n-----> Standard printf int <-----\nTesting - %d\n", 2147483647);
	fflush(stdout);
	ft_printf("\n-----> ft_printf int <-----\nTesting - %d\n", 2147483647);
	fflush(stdout);
	
	printf("\n-----> Standard printf int <-----\nTesting - %d\n", -2147483648);
	fflush(stdout);
	ft_printf("\n-----> ft_printf int <-----\nTesting - %d\n", -2147483648);
	fflush(stdout);

	printf(" \n%i %i %i %i %i %i %i \n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	fflush(stdout);
	ft_printf(" \n%i %i %i %i %i %i %i \n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	fflush(stdout);

	printf("\n-----> Standard printf int III <-----\nTesting - %i\n", -1231231);
	fflush(stdout);
	ft_printf("\n-----> ft_printf int III <-----\nTesting - %i\n", -1231231);
	fflush(stdout);

	printf("\n-----> Standard printf int UUU <-----\nTesting - %u\n", -1231231);
	fflush(stdout);
	ft_printf("\n-----> ft_printf int UUU <-----\nTesting - %u\n", -1231231);
	fflush(stdout);
	
	printf("\n-----> Standard printf int UUU <-----\nTesting - %u\n", -1231231);
	fflush(stdout);
	ft_printf("\n-----> ft_printf int UUU <-----\nTesting - %u\n", -1231231);
	fflush(stdout);

	// 

	printf("\n -----> Standard printf with UINT_MAX for %%u, %%x, %%X <-----\n");
	printf("Testing - %%u: %u\n", UINT_MAX);
	printf("Testing - %%x: %x\n", UINT_MAX);
	printf("Testing - %%X: %X\n", UINT_MAX);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with UINT_MAX for %%u, %%x, %%X <-----\n");
	ft_printf("Testing - %%u: %u\n", UINT_MAX);
	ft_printf("Testing - %%x: %x\n", UINT_MAX);
	ft_printf("Testing - %%X: %X\n", UINT_MAX);
	fflush(stdout);

	printf("\n -----> Standard printf with zero and negative zero for %%d and %%u <-----\n");
	printf("Testing - %%d zero: %d\n", 0);
	printf("Testing - %%d negative zero (0): %d\n", -0);
	printf("Testing - %%u zero: %u\n", 0);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with zero and negative zero for %%d and %%u <-----\n");
	ft_printf("Testing - %%d zero: %d\n", 0);
	ft_printf("Testing - %%d negative zero (0): %d\n", -0);
	ft_printf("Testing - %%u zero: %u\n", 0);
	fflush(stdout);

	printf("\n -----> Standard printf with multiple NULL %%s and %%p <-----\n");
	printf("Testing - NULL string: %s | NULL pointer: %p | Another NULL string: %s\n", NULL, NULL, NULL);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with multiple NULL %%s and %%p <-----\n");
	ft_printf("Testing - NULL string: %s | NULL pointer: %p | Another NULL string: %s\n", NULL, NULL, NULL);
	fflush(stdout);

	printf("\n -----> Standard printf empty format string and literal %% <-----\n");
	printf("");
	printf("Print literal percent sign: %%\n");
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf empty format string and literal %% <-----\n");
	ft_printf("");
	ft_printf("Print literal percent sign: %%\n");
	fflush(stdout);

	printf("\n -----> Standard printf mixed types and ordering <-----\n");
	printf("Testing - %%s %%d %%c %%u %%x %%p: %s %d %c %u %x %p\n", str, n, c, num, num, ptr);
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf mixed types and ordering <-----\n");
	ft_printf("Testing - %%s %%d %%c %%u %%x %%p: %s %d %c %u %x %p\n", str, n, c, num, num, ptr);
	fflush(stdout);

	printf("\n -----> Standard printf with %%c null char '\\0' <-----\n");
	printf("Testing - %%c null char: %c|\n", '\0');
	fflush(stdout);
	ft_printf("\n -----> 42 ft_printf with %%c null char '\\0' <-----\n");
	ft_printf("Testing - %%c null char: %c|\n", '\0');
	fflush(stdout);

	return (0);
}

// cc -Ift_printf main.c libftprintf.a && ./a.out
