/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meguzqui <meguzqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:45:29 by meguzqui          #+#    #+#             */
/*   Updated: 2023/11/27 00:16:36 by meguzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*last_occ;

	last_occ = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			last_occ = (char *)&str[i];
		i ++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (last_occ);
}
