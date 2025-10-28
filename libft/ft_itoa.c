/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:38:24 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/21 18:37:38 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	handle_sign(int n, char *str)
{
	if (n < 0)
	{
		str[0] = '-';
		return ((unsigned int)(-n));
	}
	return ((unsigned int)n);
}

static size_t	digits(int n)
{
	size_t			count;
	unsigned int	num;

	count = 0;
	if (n <= 0)
	{
		count = 1;
		num = (unsigned int)-n;
	}
	else
		num = (unsigned int)n;
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			i;
	size_t			len;
	unsigned int	num;

	len = digits(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	num = handle_sign(n, str);
	i = len;
	while (i > 0)
	{
		i--;
		if (n < 0 && i == 0)
			break ;
		str[i] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
