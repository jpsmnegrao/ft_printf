/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:56:23 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/16 16:56:23 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			find;

	find = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == find)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == find)
		return ((char *) &s[i]);
	return (NULL);
}
