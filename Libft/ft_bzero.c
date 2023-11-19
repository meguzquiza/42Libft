/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:36:43 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/12 19:39:33 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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