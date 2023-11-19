/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:00:08 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/19 21:10:25 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_number_size(int number)
{
	unsigned int	lenght;

	lenght = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		lenght += 1;
	while (number != 0)
	{
		number /= 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	unsigned int	lenght;
	char			*string;

	lenght = ft_number_size(n);
	string = (char *)malloc(sizeof(char) * (lenght + 1));
	if (string == NULL)
		return (NULL);
	if (number < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		string[0] = '0';
	string[lenght] = '\0';
	while (number != 0)
	{
		string[lenght - 1] = (number % 10) + '0';
		number = number / 10;
		lenght--;
	}
	return (string);
}
