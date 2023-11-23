/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <meguzqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:15:47 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/23 12:19:54 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	size_t	j;

	x = 0;
	j = 0;
	if (s2 == NULL || s2[0] == '\0')
		return ((char *)s1);
	while (s1[x] != '\0' && i < n)
	{
		if (s1[x] == s2[j])
		{
			while (s1[x + j] == s2[j] && x + j < n)
			{
				if (s2[j + 1] == '\0')
					return ((char *)s1 + x);
				j++;
			}
			j = 0;
		}
		x++;
	}
	return (NULL);
}
