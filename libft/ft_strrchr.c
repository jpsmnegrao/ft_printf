/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:59:46 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/16 16:59:46 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	ssize_t	len;
	char	find;

	find = (char) c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == find)
			return ((char *) &s[len]);
		len--;
	}
	return (NULL);
}
