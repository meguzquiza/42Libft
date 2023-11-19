/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:36:47 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/10 21:45:34 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	j;

	x = 0;
	j = 0;
	while (dest[x] && x < size)
		x++;
	while (src[j] && (x + j + 1) < size)
	{
		dest[x + j] = src[j];
		j++;
	}
	if (x < size)
		dest[x + j] = '\0';
	return (x + ft_strlen(src));
}
