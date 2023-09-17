/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:32:39 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/13 01:10:55 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if(s[i] == '\0')
		return((char *)s);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
		if (s[i] == c)
			return ((char *)s + i);
	}
	return(0);
}
