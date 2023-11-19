/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:53:58 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/10 20:03:22 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(unsigned char c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main()
{
	unsigned char c = 'Z';
	printf("%d\n", ft_isalnum(c));
	return 0;
}*/
