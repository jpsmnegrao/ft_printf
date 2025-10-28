#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	printf("\nSP - Testing ft_printf!\n");
	ft_printf("42P - Testing ft_printf!\n");
	return (0);
}

// gcc -Ilibft -Ift_printf main.c libftprintf.a && ./a.out
