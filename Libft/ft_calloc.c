/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <meguzqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:22:29 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/23 12:18:17 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	x;
	void	*z;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	x = count * size;
	z = malloc(x);
	if (z == NULL)
		return (NULL);
	else
		ft_bzero(z, x);
	return (z);
}
