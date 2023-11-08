/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:32:39 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/11/07 22:31:35 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	int car;

	i = 0;
	car = (char) c;
	if(s[i] == '\0')
		return(0);
	while (s[i])
	{
		if (s[i] == car)
			return ((char *)s + i);
		i++;
		if (s[i] == car)
			return ((char *)s + i);
	}
	return(0);
}
