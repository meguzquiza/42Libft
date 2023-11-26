/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <meguzqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:41:48 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/27 00:19:32 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *)dest;
	b = (char *)src;
	if (!a && !b)
		return (NULL);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
