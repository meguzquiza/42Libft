/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <meguzqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:08:58 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/23 12:19:47 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t x)
{
	while (*s1 != '\0' && *s1 == *s2 && x > 0)
	{
		s1++;
		s2++;
		x--;
	}
	if (x == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
