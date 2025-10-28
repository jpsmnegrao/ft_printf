/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <jpaim-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:52:44 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/10/21 20:26:42 by jpaim-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_equal(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (is_equal(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	len = ft_strlen(s1);
	while (len != 0)
	{
		if (is_equal(s1[len - 1], set) == 1)
			len--;
		else
			break ;
	}
	str = (char *)malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s1, len + 1);
	return (str);
}
