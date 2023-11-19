/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:22:29 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/18 20:43:16 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
