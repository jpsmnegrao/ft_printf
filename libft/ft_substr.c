/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:05:16 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/17 18:24:37 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
		return (ft_strdup(""));
	if (len > size - start)
		len = size - start;
	sub = (char *)malloc((sizeof(char)) * (len + 1));
	if (!sub)
		return (NULL);
	size = 0;
	while (len > size)
	{
		sub[size] = s[start + size];
		size++;
	}
	sub[size] = '\0';
	return (sub);
}
