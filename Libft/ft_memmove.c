/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <meguzqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:50:29 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/22 20:13:51 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (s2 < s1)
	{
		len = n;
		while (len > 0)
		{
			len--;
			(unsigned char *)s1[len] = (unsigned char *)s2[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			(unsigned char *)s1[len] = (unsigned char *)s2[len];
			len++;
		}
	}
	return (s1);
}
