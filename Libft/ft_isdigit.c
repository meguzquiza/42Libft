/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <meguzqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:30:23 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/23 12:21:31 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	int	x;

	x = i + '0';
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main()
{
	int i = 2;
	printf("%d\n", ft_isdigit(i));
	return 0;
}*/
