/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <meguzqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:50:40 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/23 12:20:54 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signo;
	int	final;

	i = 0;
	signo = 1;
	final = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = signo * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final = (str[i] - '0') + (final * 10);
		i++;
	}
	return (final * signo);
}
