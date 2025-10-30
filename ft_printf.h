/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:17:15 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/30 18:38:30 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	format_converter(char data_type, va_list args, size_t *counter);
int		ft_putchar(int c, size_t *counter);
int		ft_putstr(char *str, size_t *counter);
int		ft_putptraddress(void *ptr, size_t *counter);
int		ft_puthexa(unsigned int num, size_t *counter, int caps);
int		ft_putnbr(int n, size_t *counter);
int		ft_putunsnbr(unsigned int n, size_t *counter);

#endif