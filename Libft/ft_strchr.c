/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:37:14 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/26 20:45:06 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	s1;
	char	*s2;
	int		i;

	i = 0;
	s2 = (char *)s;
	s1 = c;
	while (s2[i] != s1)
	{
		if (s2[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)s2 + i);
}
