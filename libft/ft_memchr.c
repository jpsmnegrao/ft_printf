/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:15:55 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/16 19:15:55 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	find;
	size_t			i;

	str = (unsigned char *)s;
	find = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == find)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
