/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <meguzqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:36:43 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/23 12:18:10 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *a, int x, size_t len)
{
	char	*b;

	b = (char *)a;
	while (len > 0)
	{
		b[len - 1] = 0;
		len--;
	}
	return (a);
}
