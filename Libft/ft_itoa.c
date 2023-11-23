/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <meguzqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:00:08 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/23 14:20:38 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_num_digits(int n)
{
	int	length;

	length = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		length++;
	}
	if (n == 0)
		return (1);
	while (n > 9)
	{
		n = n / 10;
		length++;
	}
	length++;
	return (length);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			size;
	long long	num;

	num = n;
	size = count_num_digits(num);
	str = malloc((sizeof(char) * size) + 1);
	if (!str)
		return (NULL);
	if (num == 0)
		str[0] = '0';
	str[size] = '\0';
	if (num < 0)
	{
		num *= -1;
		str[0] = '-';
	}
	size--;
	while (num)
	{
		str[size] = ((num % 10) + '0');
		num = num / 10;
		size--;
	}
	return (str);
}