/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:20:09 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/27 21:54:37 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list    args;

	va_start(args, format);

/*	while (*format != '%')
	{
		format++;
		if (*format == )
		{
			https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf/building-the-thing
		}
	
	
	}*/
	return (0);
}

int main()
{
	int result = printf("Sentence to know how many %s\n", "characters were written");
	
	printf("%d characters were written", result);
}