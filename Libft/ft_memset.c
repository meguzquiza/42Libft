/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <meguzqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:14:52 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/23 12:18:51 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int x, size_t longitud)
{
	char	*b;

	b = (char *)a;
	while (longitud > 0)
	{
		b[longitud - 1] = x;
		longitud--;
	}
	return (a);
}
